#include <string.h>
#include <math.h>
#include "FireLog.h"
#include "FireSight.hpp"
#include "opencv2/features2d/features2d.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "jansson.h"

using namespace cv;
using namespace std;
using namespace firesight;

Model::Model(ArgMap &argMap) {
  pJson = json_object();
	this->argMap = argMap;
}

Model::~Model() {
  json_decref(pJson);
}
