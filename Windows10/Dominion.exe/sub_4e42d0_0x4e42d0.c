// 函数: sub_4e42d0
// 地址: 0x4e42d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i_3 = 4
__builtin_memcpy(&arg1[0x2f2], 
    "\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x"
"00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x
        00", 
    0x30)
arg1[0x2ff] = 0
arg1[0x300] = 0
arg1[0x2fe] = 0
void* eax = &arg1[0x2c]
*arg1 = 0
arg1[4] = 0
arg1[8] = 0
arg1[0xc] = 0
arg1[0x10] = 0
arg1[0x14] = 0
arg1[0x18] = 0
arg1[0x1c] = 0
arg1[0x20] = 0
arg1[0x24] = 0
int32_t i

do
    *(eax - 0x10) = 0
    eax += 0x48
    __builtin_memset(eax - 0x48, 0, 0x38)
    i = i_3
    i_3 -= 1
while (i != 1)
void* eax_1 = &arg1[0x70]
int32_t i_4 = 0x6b
int32_t i_1

do
    *eax_1 = 0
    eax_1 += 0x10
    i_1 = i_4
    i_4 -= 1
while (i_1 != 1)
arg1[0x5bd] = i_4

for (int32_t i_2 = 0; i_2 s< 0x20; i_2 += 1)
    void* edx_2 = &arg1[0x272 + i_2 * 4]
    
    if (*edx_2 == 0)
        break
    
    int32_t ebx_1 = arg1[i_2 * 4 + 0x275]
    void* eax_4 = &arg1[(i_2 + 0x9d) * 4]
    
    if (*eax_4 == ebx_1)
        if (i_2 == 0x20)
            *edx_2 = 0
            break
        
        memmove(edx_2, &arg1[0x276 + i_2 * 4], (0x1f - i_2) << 4)
    else if (*eax_4 != 0 || ebx_1 != 0xa)
        *eax_4 = 0
        *(eax_4 + 4) = 0xa

arg1[0x2f2] = 0
arg1[0x2f3] = 2
arg1[0x2f4] = 0
arg1[0x2f5] = 2
arg1[0x2f6] = 0
arg1[0x2f7] = 2
arg1[0x2f8] = 0
arg1[0x2f9] = 2
arg1[0x2fa] = 0
arg1[0x2fb] = 1
arg1[0x2fc] = 0
arg1[0x2fd] = 2
arg1[0x2fe].w = 0
return memset(&arg1[0x5c4], 0, 0x280)
