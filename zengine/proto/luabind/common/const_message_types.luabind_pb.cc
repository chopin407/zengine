// Generated By protoc-gen-luabind.  DO NOT EDIT!
//

#include "const_message_types.pb.h"

#include "luabind/luabind.hpp"
#include "luabind/enum.hpp"
#include "luabind/out_value_policy.hpp"

void LuabindPB_MessageTypes_Register(lua_State* L) {
  luabind::module(L) [
    luabind::enum_("MessageTypes").def() [
      luabind::value("MESSAGE_NONE", 0),
      luabind::value("MESSAGE_CS_AUTH_CHALLENGE", 1),
      luabind::value("MESSAGE_SC_AUTH_CHALLENGE", 2),
      luabind::value("MESSAGE_CS_AUTH_PROOF", 3),
      luabind::value("MESSAGE_SC_AUTH_PROOF", 4),
      luabind::value("MESSAGE_CS_SERVER_CHALLENGE_REQUEST", 5),
      luabind::value("MESSAGE_SC_SERVER_CHALLENGE_ACK", 6),
      luabind::value("MESSAGE_CS_SERVER_SESSION_NEW", 7),
      luabind::value("MESSAGE_SC_SERVER_SESSION_NEW", 8),
      luabind::value("MESSAGE_CS_SERVER_SESSION_CLOSE", 9),
      luabind::value("MESSAGE_SC_SERVER_SESSION_CLOSE", 10),
      luabind::value("MESSAGE_CS_LOGOUT_REQ", 52),
      luabind::value("MESSAGE_SC_RET_LOGOUT", 53),
      luabind::value("MESSAGE_RET_REQ_RESULT", 100)
    ]
  ];
}


//////////////////////////////////////////////////
void LuabindPB_const_message_types_RegisterAll(lua_State* L) {
  LuabindPB_MessageTypes_Register(L);
}

//////////////////////////////////////////////////