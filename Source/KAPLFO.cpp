/*
  ==============================================================================

    KAPLFO.cpp
    Created: 3 Jul 2019 6:03:35pm
    Author:  Matt

  ==============================================================================
*/

#include "KAPLFO.h"
#include "JuceHeader.h"

KAPLFO::KAPLFO()
{
	reset();
}

KAPLFO::~KAPLFO()
{

}

void KAPLFO::reset()
{
	mPhase = 0.0f;
	zeromem(mBuffer, sizeof(float) * maxBufferDSPSize);
}

void KAPLFO::setSampleRate(double inSampleRate)
{
	mSampleRate = inSampleRate;
}

void KAPLFO::process(float inRate, float inDepth, int inNumSamples)
{
	const float rate = jmap(inRate, 0.0f, 1.0f, 0.01f, 10.0f);
	
	for (int i = 0; i < inNumSamples; i++) {
		mPhase = mPhase + (rate / mSampleRate);


		if (mPhase > 1.0f) {
			mPhase -= 1.0f;
		}

		const float lfoPosition = sinf(mPhase * k2PI) * inDepth;

		mBuffer[i] = lfoPosition;
	}
}

float* KAPLFO::getBuffer()
{
	return mBuffer;
}