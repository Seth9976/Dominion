// 函数: sub_643ce0
// 地址: 0x643ce0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
float xmm2_1 = arg3[0x16] f+ arg3[1]
int32_t eax_2 = data_1724a60
int64_t* ebx = arg2
float xmm3_2[0x4] = (*arg3 f+ arg3[0x15]) * 0.5f
int64_t* var_40 = ebx
bool cond:0 = 1f f> *(arg4 + 0xc)
int32_t edx_1 = data_1724a58
int128_t var_38 = data_893260

if (cond:0)
    eax_2 = data_1724a68

int128_t var_28
__builtin_memcpy(&var_28, 
    "\x02\x00\x06\x00\x00\x00\x04\x00\x01\x00\x05\x00\x03\x00\x07\x00\x00\x00\x04\x00\x01\x00\x05\x00\x"
"03\x00\x07\x00\x02\x00\x06\x00", 
    0x20)
float xmm0_3 = (arg3[0x17] f+ arg3[2]) * 0.5f
sub_643bc0(xmm0_3, edx_1, 6, _mm_unpacklo_ps(xmm3_2, xmm2_1 * 0.5f), xmm0_3, eax_2)
int32_t eax_4 = data_1476b44
int32_t i = 0
data_1476b44 = eax_4 + 6
void* esi = eax_4 * 0xc0 + 0xe76b5c
uint32_t j

do
    int32_t ecx_2 = ebx[1].d
    j = 0
    int64_t xmm5_1 = *ebx
    int32_t var_48_1 = ecx_2
    uint32_t j_1 = 0
    
    do
        int32_t eax_8 = sx.d(*(&var_38 + j + (i << 3))) * 3
        *(esi - 0x18) = *(arg3 + (eax_8 << 2))
        int32_t eax_9 = arg3[eax_8 + 2]
        *(esi - 0xc) = xmm5_1
        *(esi - 4) = ecx_2
        *(esi - 0x10) = eax_9
        int64_t var_70
        var_70.o = *arg4
        int32_t eax_10 = sub_64b360(var_70)
        *(esi + 4) = 0
        *(esi + 8) = 0x3f000000
        ecx_2 = var_48_1
        *(esi + 0xc) = 0x3f000000
        j = j_1 + 2
        *esi = (((((eax_10 u>> 0x18 << 8) + zx.d(eax_10.b)) << 8) + zx.d((eax_10 u>> 8).b)) << 8)
            + zx.d((eax_10 u>> 0x10).b)
        esi += 0x30
        j_1 = j
    while (j != 8)
    
    i += 1
    ebx = var_40 + 0xc
    var_40 = ebx
while (i s< 6)

CookieCheckFunction(j)
return j
