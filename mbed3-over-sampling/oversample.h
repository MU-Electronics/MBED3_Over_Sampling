#include <map>
#include <vector>

#pragma once

class OverSample
{

public:
    OverSample(void);
    ~OverSample(void);
protected:
    std::map< int, std::vector< int, int > > lookup;
    bool calculateSamples(int bit);
    bool retrieve(int bit, int channel);
    bool findLookup(int bit, int value);
public:
    int calibrationRun(int bit, int realVoltage, int retrievedVoltage);
    int calibrate(std::map< int, std::vector< int, int > > lookup);
    int calibrateBackup(std::map< int, std::vector< int, int > > lookup);
    int sample(int channel, int bit);

};