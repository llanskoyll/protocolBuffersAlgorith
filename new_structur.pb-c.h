/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: new_structur.proto */

#ifndef PROTOBUF_C_new_5fstructur_2eproto__INCLUDED
#define PROTOBUF_C_new_5fstructur_2eproto__INCLUDED

#include "protobuf-c.h"

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003003 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _AMessage2 AMessage2;


/* --- enums --- */


/* --- messages --- */

struct  _AMessage2
{
  ProtobufCMessage base;
  uint32_t id;
  uint32_t years;
  uint32_t new_parametr;
  uint32_t crc;
};
#define AMESSAGE_2__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&amessage_2__descriptor) \
    , 0, 0, 0, 0 }


/* AMessage2 methods */
void   amessage_2__init
                     (AMessage2         *message);
size_t amessage_2__get_packed_size
                     (const AMessage2   *message);
size_t amessage_2__pack
                     (const AMessage2   *message,
                      uint8_t             *out);
size_t amessage_2__pack_to_buffer
                     (const AMessage2   *message,
                      ProtobufCBuffer     *buffer);
AMessage2 *
       amessage_2__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   amessage_2__free_unpacked
                     (AMessage2 *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*AMessage2_Closure)
                 (const AMessage2 *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor amessage_2__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_new_5fstructur_2eproto__INCLUDED */
