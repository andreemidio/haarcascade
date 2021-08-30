#include <opencv2/objdetect.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/videoio.hpp>
#include <iostream>


int main() {

    cv::VideoCapture capture;
    int camera_device = 0;
    cv::Mat frame;

    std::cout << "Hello, World!" << std::endl;

    cv::CascadeClassifier face_cascade;

    capture.open(camera_device, cv::CAP_DSHOW);

    if (!capture.isOpened()) {
        std::cout << "Erro ao abrir o video" << std::endl;
        return 0;

    }

    while (capture.read(frame)) {

        if (!frame.empty()) {
            std::cout << "Não capturou frame" << std::endl;
            break;
        }

        cv::imshow("Frame", frame);


        if (cv::waitKey(10) == 27) {
            break;
        }
    }

    return 0;
}
