// 函数: sub_5f7090
// 地址: 0x5f7090
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx = __chkstk(0x332c)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
sub_4add50(data_be153c)
*(ecx + 0x18) &= 0xffffffcf
uint32_t count = 0x1990
void var_332c
void* var_10 = &var_332c
*(ecx + 0xc) = 0
*(ecx + 0x10) = 0
void var_199c
memcpy(&var_199c, sub_4e49d0(ecx, var_10), count)
sub_4e42d0(&var_199c)
char* result = sub_4e4cb0(ecx)
CookieCheckFunction(result)
return result
