// 函数: sub_695be0
// 地址: 0x695be0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

FILE* _Stream
uint32_t result = __security_cookie ^ &_Stream
uint32_t result_1 = result
int32_t esi = arg1[2] * 0xa8
int32_t* i = *arg1
_Stream = arg2
int32_t esi_1 = esi + 0xc

while (i != 0)
    int32_t* edx = *i
    i = i[1]
    void _Buffer
    sub_6958c0(result, edx, &_Buffer, esi_1)
    result = fwrite(&_Buffer, 0xa8, 1, _Stream)
    
    if (result != 1)
        result.b = 0
        CookieCheckFunction(result)
        return result
    
    int32_t var_a8
    esi_1 += var_a8

result.b = 1
CookieCheckFunction(result)
return result
