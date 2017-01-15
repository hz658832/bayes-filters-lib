#ifndef KALMANFILTER_H
#define KALMANFILTER_H

#include <FilteringAlgorithm/FilteringAlgorithm.h>


class KalmanFilter: public FilteringAlgorithm {
public:
    KalmanFilter();

    ~KalmanFilter() noexcept override;

    void runFilter() override;

    void getResult() override;
};

#endif /* KALMANFILTER_H */
