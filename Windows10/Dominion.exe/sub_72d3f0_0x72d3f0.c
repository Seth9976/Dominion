// 函数: sub_72d3f0
// 地址: 0x72d3f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx
uint32_t* edx
ecx, edx = __chkstk(0x886c)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int32_t var_20 = 0
int32_t var_24 = 0
uint32_t var_8864
void* result_1 = sub_72cd60(memset(&var_8864, 0, 0x8858), &var_8864, ecx, arg2)
void* result = nullptr

if (result_1 != ecx)
    result = result_1

if (result != 0)
    *edx = var_8864
    int32_t var_8860
    *arg1 = var_8860

int32_t var_8854
free(var_8854)
int32_t var_8858
free(var_8858)
CookieCheckFunction(result)
return result
