// 函数: sub_5b08b0
// 地址: 0x5b08b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t ebx
int32_t var_24 = ebx
*arg4 = 0
*arg2 = 0
*arg3 = 0
int32_t var_30 = ebx
int32_t eax_3
int32_t ecx
int32_t edx
int32_t ebx_1
eax_3, ebx_1, ecx, edx = __cpuid(2, 0)
int32_t var_c = 0
int32_t var_10 = 0
int32_t var_14 = 0
int32_t var_18 = 0
var_18 = eax_3
int32_t var_14_1 = ebx_1
int32_t var_10_1 = ecx
int32_t var_c_1 = edx
char ebx_2 = 0
int32_t* ecx_1

for (int32_t i = 0; i s< 0xe; i += 1)
    int32_t eax_5 = zx.d(*(&var_18:2 + i)) - 0xa
    
    if (eax_5 u> 0x83)
        ecx_1 = arg4
    else
        switch (eax_5)
            case 0, 0x5c
                *arg3 = 8
                ecx_1 = arg4
            case 1, 3, 5, 7, 8, 9, 0xa, 0xc, 0xd, 0xe, 0xf, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 
                    0x17, 0x1a, 0x1c, 0x1d, 0x1e, 0x20, 0x21, 0x23, 0x24, 0x25, 0x27, 0x28, 0x29, 
                    0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x35, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 
                    0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x57, 0x58, 0x59, 
                    0x5a, 0x5b, 0x5f, 0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 
                    0x6a, 0x6b, 0x6c, 0x6d, 0x81, 0x82
                ecx_1 = arg4
            case 2, 6, 0xb, 0x56, 0x5d
                *arg3 = 0x10
                ecx_1 = arg4
            case 4
                *arg3 = 0x18
                ecx_1 = arg4
            case 0x10
                *arg2 = 0x60
                ecx_1 = arg4
            case 0x18
                ecx_1 = arg4
                *ecx_1 = 0x200
            case 0x19
                ecx_1 = arg4
                *ecx_1 = 0x400
            case 0x1b, 0x7e
                ecx_1 = arg4
                *ecx_1 = 0x800
            case 0x1f, 0x3c, 0x7f
                ecx_1 = arg4
                *ecx_1 = 0x1000
            case 0x22, 0x26, 0x5e
                *arg3 = 0x20
                ecx_1 = arg4
            case 0x2f, 0x31, 0x37, 0x6f, 0x77
                *arg2 = 0x80
                ecx_1 = arg4
            case 0x30
                *arg2 = 0xc0
                ecx_1 = arg4
            case 0x32, 0x38, 0x70, 0x74, 0x78
                *arg2 = 0x100
                ecx_1 = arg4
            case 0x33
                *arg2 = 0x180
                ecx_1 = arg4
            case 0x34, 0x39, 0x71, 0x75, 0x76, 0x79, 0x7c
                *arg2 = 0x200
                ecx_1 = arg4
            case 0x36
                *arg2 = 0
                ecx_1 = arg4
            case 0x3a, 0x6e, 0x72, 0x7a, 0x7d
                *arg2 = 0x400
                ecx_1 = arg4
            case 0x3b, 0x73, 0x7b
                *arg2 = 0x800
                ecx_1 = arg4
            case 0x3d, 0x41, 0x80
                ecx_1 = arg4
                *ecx_1 = 0x2000
            case 0x3e
                *arg2 = 0xc00
                ecx_1 = arg4
            case 0x3f
                if (*arg2 == 0)
                    ebx_2 = 1
                    *arg2 = 0x1000
                
                ecx_1 = arg4
                *ecx_1 = 0x1000
            case 0x40
                ecx_1 = arg4
                *ecx_1 = 0x1800
            case 0x42
                ecx_1 = arg4
                *ecx_1 = 0x3000
            case 0x43
                ecx_1 = arg4
                *ecx_1 = 0x4000
            case 0x44
                *arg2 = 0x1800
                ecx_1 = arg4
            case 0x83
                ecx_1 = arg4
                *ecx_1 = 0xc00

if (ebx_2 != 0 && *arg2 == *ecx_1)
    *ecx_1 = 0

*arg3 <<= 0xa
*arg2 <<= 0xa
int32_t result = *ecx_1 << 0xa
*ecx_1 = result
CookieCheckFunction(result)
return result
