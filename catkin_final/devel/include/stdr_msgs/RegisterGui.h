// Generated by gencpp from file stdr_msgs/RegisterGui.msg
// DO NOT EDIT!


#ifndef STDR_MSGS_MESSAGE_REGISTERGUI_H
#define STDR_MSGS_MESSAGE_REGISTERGUI_H

#include <ros/service_traits.h>


#include <stdr_msgs/RegisterGuiRequest.h>
#include <stdr_msgs/RegisterGuiResponse.h>


namespace stdr_msgs
{

struct RegisterGui
{

typedef RegisterGuiRequest Request;
typedef RegisterGuiResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct RegisterGui
} // namespace stdr_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::stdr_msgs::RegisterGui > {
  static const char* value()
  {
    return "5ba49d43b5f1ad43f9cbea11348366c5";
  }

  static const char* value(const ::stdr_msgs::RegisterGui&) { return value(); }
};

template<>
struct DataType< ::stdr_msgs::RegisterGui > {
  static const char* value()
  {
    return "stdr_msgs/RegisterGui";
  }

  static const char* value(const ::stdr_msgs::RegisterGui&) { return value(); }
};


// service_traits::MD5Sum< ::stdr_msgs::RegisterGuiRequest> should match 
// service_traits::MD5Sum< ::stdr_msgs::RegisterGui > 
template<>
struct MD5Sum< ::stdr_msgs::RegisterGuiRequest>
{
  static const char* value()
  {
    return MD5Sum< ::stdr_msgs::RegisterGui >::value();
  }
  static const char* value(const ::stdr_msgs::RegisterGuiRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::stdr_msgs::RegisterGuiRequest> should match 
// service_traits::DataType< ::stdr_msgs::RegisterGui > 
template<>
struct DataType< ::stdr_msgs::RegisterGuiRequest>
{
  static const char* value()
  {
    return DataType< ::stdr_msgs::RegisterGui >::value();
  }
  static const char* value(const ::stdr_msgs::RegisterGuiRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::stdr_msgs::RegisterGuiResponse> should match 
// service_traits::MD5Sum< ::stdr_msgs::RegisterGui > 
template<>
struct MD5Sum< ::stdr_msgs::RegisterGuiResponse>
{
  static const char* value()
  {
    return MD5Sum< ::stdr_msgs::RegisterGui >::value();
  }
  static const char* value(const ::stdr_msgs::RegisterGuiResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::stdr_msgs::RegisterGuiResponse> should match 
// service_traits::DataType< ::stdr_msgs::RegisterGui > 
template<>
struct DataType< ::stdr_msgs::RegisterGuiResponse>
{
  static const char* value()
  {
    return DataType< ::stdr_msgs::RegisterGui >::value();
  }
  static const char* value(const ::stdr_msgs::RegisterGuiResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // STDR_MSGS_MESSAGE_REGISTERGUI_H