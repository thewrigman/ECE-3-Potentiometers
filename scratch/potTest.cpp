#include <iostream>
#include <vector>
#include <fstream>
#include "svm.h"

using namespace std;

int main()
{
    // load model from file
    struct svm_model* model = svm_load_model("svm_model.pkl");

    // prepare test data
    vector<svm_node> test_data;
    svm_node data_point;
    data_point.index = 1;  // set index of first feature
    data_point.value = 1.5;  // set value of first feature
    test_data.push_back(data_point);
    data_point.index = 2;  // set index of second feature
    data_point.value = 2.5;  // set value of second feature
    test_data.push_back(data_point);
    // add more features as needed

    // predict using the model
    double prediction = svm_predict(model, &test_data[0]);

    // print the prediction
    cout << "Prediction: " << prediction << endl;

    // free memory used by the model
    svm_free_and_destroy_model(&model);

    return 0;
}