#include "ros/ros.h"
#include "pluginlib/class_loader.h"
#include "demo03_plugin/dbx_base.h"

/*
    創建類加載器,根據需求加載相關插件
*/

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "");
    pluginlib::ClassLoader<dbx_base_ns::Dbx_Base> loader("demo03_plugin", "dbx_base_ns::Dbx_Base");
    boost::shared_ptr<dbx_base_ns::Dbx_Base> san = loader.createInstance("dbx_plugins_ns::SanBian");
    san->init(10);
    double length = san->getlength();
    ROS_INFO("三角形周長:%.2f", length);

    boost::shared_ptr<dbx_base_ns::Dbx_Base> si = loader.createInstance("dbx_plugins_ns::SiBian");
    si->init(10);
    double length2 = si->getlength();
    ROS_INFO("四角形周長:%.2f", length2);
    return 0;
}
