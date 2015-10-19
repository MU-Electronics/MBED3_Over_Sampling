#include <map>
#include <vector>
#include <string>


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
 * PUBLIC: Add a reading to the lookup table (real voltage vs over sampled voltage) for a bit accuracy
 *
 * @author Sam Mottley sam.mottley@manchester.ac.uk
 */
bool OverSample::AddLookUpValue(int bit, int realVoltage, int retrievedVoltage)
{

}

/**
 * PUBLIC: Load lookup table into object
 *
 * @author Sam Mottley sam.mottley@manchester.ac.uk
 */
bool OverSample::AddLookUpTable(std::map< int, std::vector< int, int > > lookup)
{

}

/**
 * PUBLIC: Receive the lookup table that has been configured or altered
 *
 * @author Sam Mottley sam.mottley@manchester.ac.uk
 */
int OverSample::LookUpTableBackup(std::map< int, std::vector< int, int > > lookup)
{

}



/**
 * PUBLIC: Polynomial statical averaging
 *
 * @author Sam Mottley sam.mottley@manchester.ac.uk
 */
bool OverSample::EnablePolynomialAveraging(int terms, std::string equation)
{

}

/**
 * PUBLIC: Polynomial statical averaging
 *
 * @author Sam Mottley sam.mottley@manchester.ac.uk
 */
bool OverSample::EnableYMXCAveraging(int gradient, int constant)
{

}



/**
 *  PUBLIC: Add a fixed gain and offset error
 */
bool OverSample::offsetGainError(int offset, int gain)
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