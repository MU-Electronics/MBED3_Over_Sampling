#include <map>
#include <vector>


/**
 * Constructor
 *
 * @author Sam Mottley sam.mottley@manchester.ac.uk
 */
OverSample::OverSample(void)
{

}

/**
 * Destructor
 *
 * @author Sam Mottley sam.mottley@manchester.ac.uk
 */
OverSample::~OverSample(void)
{

}





/**
 * PRIVATE: Calculate the number the of samples to acquire the bit accuracy selected
 *
 * @author Sam Mottley sam.mottley@manchester.ac.uk
 */
bool OverSample::calculateSamples(int bit)
{

}

/**
 * PRIVATE: receive one sample
 *
 * @author Sam Mottley sam.mottley@manchester.ac.uk
 */
bool OverSample::retrieve(int bit, int channel)
{

}

/**
 * PRIVATE: compare the over sampled result to the lookup table
 *
 * @author Sam Mottley sam.mottley@manchester.ac.uk
 */
bool OverSample::findLookup(int bit, int value)
{

}





/**
 * PUBLIC: Add a calibration (real voltage vs over sampled voltage) for a bit accuracy
 *
 * @author Sam Mottley sam.mottley@manchester.ac.uk
 */
int OverSample::calibrationRun(int bit, int realVoltage, int retrievedVoltage)
{

}

/**
 * PUBLIC: Load calibration into object
 *
 * @author Sam Mottley sam.mottley@manchester.ac.uk
 */
int OverSample::calibrate(std::map< int, std::vector< int, int > > lookup)
{

}

/**
 * PUBLIC: Receive the calibration that has been configured
 *
 * @author Sam Mottley sam.mottley@manchester.ac.uk
 */
int OverSample::calibrateBackup(std::map< int, std::vector< int, int > > lookup)
{

}

/**
 * PUBLIC: Obtain a accurate over sampled result
 *
 * @author Sam Mottley sam.mottley@manchester.ac.uk
 */
int OverSample::sample(int channel, int bit)
{

}