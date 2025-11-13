// 函数: sub_6c8420
// 地址: 0x6c8420
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
RECT rect
GetClientRect(data_147b084, &rect)
int32_t right = rect.right

if (right != 0)
    int32_t bottom = rect.bottom
    
    if (bottom != 0)
        void* eax_2 = data_cf65b8
        float result = float.s(*(eax_2 + 0x14)) * float.s(arg1) / float.s(right)
        float var_1c = float.s(*(eax_2 + 0x18)) * float.s(arg2) / float.s(bottom)
        CookieCheckFunction(result)
        return result

CookieCheckFunction(0)
return 0
