// Generated by gencpp from file stdr_msgs/MoveRobotRequest.msg
// DO NOT EDIT!


#ifndef STDR_MSGS_MESSAGE_MOVEROBOTREQUEST_H
#define STDR_MSGS_MESSAGE_MOVEROBOTREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose2D.h>

namespace stdr_msgs
{
template <class ContainerAllocator>
struct MoveRobotRequest_
{
  typedef MoveRobotRequest_<ContainerAllocator> Type;

  MoveRobotRequest_()
    : newPose()  {
    }
  MoveRobotRequest_(const ContainerAllocator& _alloc)
    : newPose(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Pose2D_<ContainerAllocator>  _newPose_type;
  _newPose_type newPose;




  typedef boost::shared_ptr< ::stdr_msgs::MoveRobotRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::stdr_msgs::MoveRobotRequest_<ContainerAllocator> const> ConstPtr;

}; // struct MoveRobotRequest_

typedef ::stdr_msgs::MoveRobotRequest_<std::allocator<void> > MoveRobotRequest;

typedef boost::shared_ptr< ::stdr_msgs::MoveRobotRequest > MoveRobotRequestPtr;
typedef boost::shared_ptr< ::stdr_msgs::MoveRobotRequest const> MoveRobotRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::stdr_msgs::MoveRobotRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::stdr_msgs::MoveRobotRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace stdr_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'stdr_msgs': ['/home/ros_user/catkin_final/src/comp313p/stdr_simulator/stdr_msgs/msg', '/home/ros_user/catkin_final/devel/share/stdr_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::stdr_msgs::MoveRobotRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::stdr_msgs::MoveRobotRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::stdr_msgs::MoveRobotRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::stdr_msgs::MoveRobotRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::stdr_msgs::MoveRobotRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::stdr_msgs::MoveRobotRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::stdr_msgs::MoveRobotRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3f8cb1536a8bfe7e956ece9331b2cd07";
  }

  static const char* value(const ::stdr_msgs::MoveRobotRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3f8cb1536a8bfe7eULL;
  static const uint64_t static_value2 = 0x956ece9331b2cd07ULL;
};

template<class ContainerAllocator>
struct DataType< ::stdr_msgs::MoveRobotRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "stdr_msgs/MoveRobotRequest";
  }

  static const char* value(const ::stdr_msgs::MoveRobotRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::stdr_msgs::MoveRobotRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Pose2D newPose\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose2D\n\
# This expresses a position and orientation on a 2D manifold.\n\
\n\
float64 x\n\
float64 y\n\
float64 theta\n\
";
  }

  static const char* value(const ::stdr_msgs::MoveRobotRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::stdr_msgs::MoveRobotRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.newPose);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MoveRobotRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::stdr_msgs::MoveRobotRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::stdr_msgs::MoveRobotRequest_<ContainerAllocator>& v)
  {
    s << indent << "newPose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose2D_<ContainerAllocator> >::stream(s, indent + "  ", v.newPose);
  }
};

} // namespace message_operations
} // namespace ros

#endif // STDR_MSGS_MESSAGE_MOVEROBOTREQUEST_H
