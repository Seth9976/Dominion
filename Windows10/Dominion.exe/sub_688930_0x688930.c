// 函数: sub_688930
// 地址: 0x688930
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t esi
int32_t var_44 = esi
int32_t var_38
int32_t* ecx
sub_6883d0(ecx, &var_38)
int16_t var_24 = 0x101
int32_t var_30 = 0
int32_t edi
uint32_t result = sub_688660(&var_38, esi, edi)
void* esi_1 = data_147abf0

if (result != 0)
    uint32_t eax_2 = zx.d(result.w)
    
    if (eax_2 u< *(esi_1 + 4))
        void* ecx_3 = eax_2 * 0x64 + *esi_1
        
        if (*(ecx_3 + 0x60) == result && ecx_3 != 0)
            *(ecx_3 + 0x2c) = *(data_147abe8 + 0x28)
            *(ecx_3 + 0x30) = arg1
            *(ecx_3 + 0x3c) = 0
            *(ecx_3 + 0x34) = 0
            *(ecx_3 + 0x38) = 0x3f800000
            *(ecx_3 + 0x28) = 2
            *(ecx_3 + 0x44) = 0x3f19999a

CookieCheckFunction(result)
return result
