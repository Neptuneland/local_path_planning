// Generated by gencpp from file custom_msg/llpoint.msg
// DO NOT EDIT!


#ifndef CUSTOM_MSG_MESSAGE_LLPOINT_H
#define CUSTOM_MSG_MESSAGE_LLPOINT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace custom_msg
{
template <class ContainerAllocator>
struct llpoint_
{
  typedef llpoint_<ContainerAllocator> Type;

  llpoint_()
    : header()
    , x(0.0)
    , y(0.0)
    , theta(0.0)
    , r(0.0)
    , velocity(0.0)
    , distance(0.0)  {
    }
  llpoint_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , x(0.0)
    , y(0.0)
    , theta(0.0)
    , r(0.0)
    , velocity(0.0)
    , distance(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _x_type;
  _x_type x;

   typedef float _y_type;
  _y_type y;

   typedef float _theta_type;
  _theta_type theta;

   typedef float _r_type;
  _r_type r;

   typedef float _velocity_type;
  _velocity_type velocity;

   typedef float _distance_type;
  _distance_type distance;




  typedef boost::shared_ptr< ::custom_msg::llpoint_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::custom_msg::llpoint_<ContainerAllocator> const> ConstPtr;

}; // struct llpoint_

typedef ::custom_msg::llpoint_<std::allocator<void> > llpoint;

typedef boost::shared_ptr< ::custom_msg::llpoint > llpointPtr;
typedef boost::shared_ptr< ::custom_msg::llpoint const> llpointConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::custom_msg::llpoint_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::custom_msg::llpoint_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace custom_msg

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'custom_msg': ['/home/george/catkin_ws/src/custom_msg/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::custom_msg::llpoint_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::custom_msg::llpoint_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::custom_msg::llpoint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::custom_msg::llpoint_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::custom_msg::llpoint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::custom_msg::llpoint_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::custom_msg::llpoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a06624653411b4b16c06064c5e1b9867";
  }

  static const char* value(const ::custom_msg::llpoint_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa06624653411b4b1ULL;
  static const uint64_t static_value2 = 0x6c06064c5e1b9867ULL;
};

template<class ContainerAllocator>
struct DataType< ::custom_msg::llpoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "custom_msg/llpoint";
  }

  static const char* value(const ::custom_msg::llpoint_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::custom_msg::llpoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
float32 x\n\
float32 y\n\
float32 theta\n\
float32 r\n\
float32 velocity\n\
float32 distance\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::custom_msg::llpoint_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::custom_msg::llpoint_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.theta);
      stream.next(m.r);
      stream.next(m.velocity);
      stream.next(m.distance);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct llpoint_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::custom_msg::llpoint_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::custom_msg::llpoint_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "theta: ";
    Printer<float>::stream(s, indent + "  ", v.theta);
    s << indent << "r: ";
    Printer<float>::stream(s, indent + "  ", v.r);
    s << indent << "velocity: ";
    Printer<float>::stream(s, indent + "  ", v.velocity);
    s << indent << "distance: ";
    Printer<float>::stream(s, indent + "  ", v.distance);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CUSTOM_MSG_MESSAGE_LLPOINT_H