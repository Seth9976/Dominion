// 函数: sub_50f0d0
// 地址: 0x50f0d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t edx = 0
int128_t var_20c

for (int32_t* i = &data_cc97b8; i s< 0xcc99b8; i = &i[4])
    int32_t ecx_1 = *i
    
    if (ecx_1 == 0)
        break
    
    if (ecx_1 == 0xc)
        edx = 5
        __builtin_memcpy(&var_20c, 
            "\x05\x0c\x00\x00\x11\x0c\x00\x00\x09\x0c\x00\x00\x0c\x0c\x00\x00\x07\x0c\x00\x00", 
            0x14)
        break

int32_t* i_1

for (i_1 = &data_cc97b8; i_1 s< 0xcc99b8; i_1 = &i_1[4])
    int32_t ecx_2 = *i_1
    
    if (ecx_2 == 0)
        break
    
    if (ecx_2 == 0x10)
        *(&var_20c + (edx << 2)) = 0x101b
        *(&var_20c:4 + (edx << 2)) = 0x101c
        *(&var_20c:8 + (edx << 2)) = 0x101d
        *(&var_20c:0xc + (edx << 2)) = 0x1034
        int32_t var_1fc
        __builtin_memcpy(&(&var_1fc)[edx], 
            "\x35\x10\x00\x00\x36\x10\x00\x00\x2f\x10\x00\x00\x30\x10\x00\x00\x31\x10\x00\x00\x25\x10\x"
        "00\x00\x26\x10\x00\x00\x27\x10\x00\x00\x2a\x10\x00\x00\x2b\x10\x00\x00\x2c\x10\x00\x00\x20"
        "10\x00\x00\x21\x10\x00\x00\x22\x10\x00\x00", 
            0x38)
        edx += 0x12
        break

if (edx != 0)
    uint32_t eax_2
    int32_t ecx_3
    eax_2, ecx_3 = sub_63ed10(&data_cc8de0, edx)
    int32_t var_210 = 0
    uint32_t result = sub_50ac80(eax_2, *(&var_20c + (eax_2 << 2)), 0xdb1, ecx_3, 0)
    CookieCheckFunction(result)
    return result

sub_63b870(i_1, &data_801800, "numWhats", "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
    0xecf, "Bell_ExoticStart_SplitPile")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
