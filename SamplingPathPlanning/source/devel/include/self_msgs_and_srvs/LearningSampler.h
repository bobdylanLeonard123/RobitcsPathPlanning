// Generated by gencpp from file self_msgs_and_srvs/LearningSampler.msg
// DO NOT EDIT!


#ifndef SELF_MSGS_AND_SRVS_MESSAGE_LEARNINGSAMPLER_H
#define SELF_MSGS_AND_SRVS_MESSAGE_LEARNINGSAMPLER_H

#include <ros/service_traits.h>


#include <self_msgs_and_srvs/LearningSamplerRequest.h>
#include <self_msgs_and_srvs/LearningSamplerResponse.h>


namespace self_msgs_and_srvs
{

struct LearningSampler
{

typedef LearningSamplerRequest Request;
typedef LearningSamplerResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct LearningSampler
} // namespace self_msgs_and_srvs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::self_msgs_and_srvs::LearningSampler > {
  static const char* value()
  {
    return "9b3be973a2fd70300d20649e1a983955";
  }

  static const char* value(const ::self_msgs_and_srvs::LearningSampler&) { return value(); }
};

template<>
struct DataType< ::self_msgs_and_srvs::LearningSampler > {
  static const char* value()
  {
    return "self_msgs_and_srvs/LearningSampler";
  }

  static const char* value(const ::self_msgs_and_srvs::LearningSampler&) { return value(); }
};


// service_traits::MD5Sum< ::self_msgs_and_srvs::LearningSamplerRequest> should match
// service_traits::MD5Sum< ::self_msgs_and_srvs::LearningSampler >
template<>
struct MD5Sum< ::self_msgs_and_srvs::LearningSamplerRequest>
{
  static const char* value()
  {
    return MD5Sum< ::self_msgs_and_srvs::LearningSampler >::value();
  }
  static const char* value(const ::self_msgs_and_srvs::LearningSamplerRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::self_msgs_and_srvs::LearningSamplerRequest> should match
// service_traits::DataType< ::self_msgs_and_srvs::LearningSampler >
template<>
struct DataType< ::self_msgs_and_srvs::LearningSamplerRequest>
{
  static const char* value()
  {
    return DataType< ::self_msgs_and_srvs::LearningSampler >::value();
  }
  static const char* value(const ::self_msgs_and_srvs::LearningSamplerRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::self_msgs_and_srvs::LearningSamplerResponse> should match
// service_traits::MD5Sum< ::self_msgs_and_srvs::LearningSampler >
template<>
struct MD5Sum< ::self_msgs_and_srvs::LearningSamplerResponse>
{
  static const char* value()
  {
    return MD5Sum< ::self_msgs_and_srvs::LearningSampler >::value();
  }
  static const char* value(const ::self_msgs_and_srvs::LearningSamplerResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::self_msgs_and_srvs::LearningSamplerResponse> should match
// service_traits::DataType< ::self_msgs_and_srvs::LearningSampler >
template<>
struct DataType< ::self_msgs_and_srvs::LearningSamplerResponse>
{
  static const char* value()
  {
    return DataType< ::self_msgs_and_srvs::LearningSampler >::value();
  }
  static const char* value(const ::self_msgs_and_srvs::LearningSamplerResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SELF_MSGS_AND_SRVS_MESSAGE_LEARNINGSAMPLER_H