#include <ros/ros.h>
#include "convex_polygon.h"

int main(int argc, char **argv) {
  ros::init(argc, argv, "convex_polygon_node");
  ros::NodeHandle nh;
  ros::NodeHandle priv_nh("~");

  dyrosvehicle::ConvexPolygonNodelet cvxpoly(nh, priv_nh);

  std::cout << "[+] accumulated_convex_polygon_node for parkingSLAM has started!" << std::endl;

  ros::AsyncSpinner spinner(4);
  spinner.start();
  ros::waitForShutdown();

  return 0;
}
