// 函数: sub_75aec0
// 地址: 0x75aec0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
char outputString[0xc8]

if (*(arg1 + 0x18) u>= 0x100)
    char const* const var_1e4 = "mMaxActiveVoices < 256"
    int32_t var_1e8 = 0x77c
    char const* const var_1ec = "D:\soloud\src\core\soloud.cpp"
    sub_63bb20(&outputString, "%s(%d): assert(%s) failed.\n")
    OutputDebugStringA(&outputString)
    breakpoint

uint32_t count = *(arg1 + 0x18)
char var_108[0x100]
uint32_t result = memset(&var_108, 0, count)
int32_t ebx = 0

if (count != 0)
    do
        void* edx_1 = arg1 + 0x1bdbc
        int32_t ecx = 0
        int32_t esi = *(*(arg1 + 0x4c) + (ebx << 2))
        result = *(arg1 + 0x18)
        
        do
            if (esi != 0)
                result = *(arg1 + 0x18)
                
                if (esi == *(arg1 + (*edx_1 << 2) + 0x50))
                    var_108[ebx] |= 1
                    var_108[ecx] |= 2
            
            ecx += 1
            edx_1 += 4
        while (ecx u< result)
        
        ebx += 1
    while (ebx u< result)
    
    int32_t i = 0
    
    do
        if ((var_108[i] & 1) == 0)
            result = *(*(arg1 + 0x4c) + (i << 2))
            
            if (result != 0)
                *(result + 0x1a4) = 0
                *(*(*(arg1 + 0x4c) + (i << 2)) + 0x1a8) = 0
                result = *(arg1 + 0x4c)
                *(result + (i << 2)) = 0
        
        i += 1
    while (i u< *(arg1 + 0x18))

int32_t j_1 = 0
int32_t i_1 = 0

if (*(arg1 + 0x1cdbc) u> 0)
    void* edx_2 = arg1 + 0x1bdbc
    void* var_1d4_1 = edx_2
    
    do
        if ((var_108[i_1] & 2) == 0)
            result = *edx_2
            
            if (*(arg1 + (result << 2) + 0x50) != 0)
                int32_t j
                
                for (j = 0xffffffff; j == 0xffffffff; )
                    if (j_1 u>= *(arg1 + 0x18))
                        if (j != 0xffffffff)
                            break
                        
                        char const* const var_1e4_3 = "found != -1"
                        int32_t var_1e8_1 = 0x7a3
                        char const* const var_1ec_2 = "D:\soloud\src\core\soloud.cpp"
                        sub_63bb20(&outputString, "%s(%d): assert(%s) failed.\n")
                        OutputDebugStringA(&outputString)
                        breakpoint
                    
                    if (*(*(arg1 + 0x4c) + (j_1 << 2)) == 0)
                        j = j_1
                    
                    j_1 += 1
                
                *(*(arg1 + 0x4c) + (j << 2)) = *(arg1 + (*var_1d4_1 << 2) + 0x50)
                *(*(*(arg1 + 0x4c) + (j << 2)) + 0x1a4) = *(*(arg1 + 0x3c) + (j << 3))
                *(*(*(arg1 + 0x4c) + (j << 2)) + 0x1a8) = *(*(arg1 + 0x3c) + (j << 3) + 4)
                memset(*(*(*(arg1 + 0x4c) + (j << 2)) + 0x1a4), 0, 0x4000)
                result = memset(*(*(*(arg1 + 0x4c) + (j << 2)) + 0x1a8), 0, 0x4000)
                edx_2 = var_1d4_1
                j_1 = j + 1
        
        i_1 += 1
        edx_2 += 4
        var_1d4_1 = edx_2
    while (i_1 u< *(arg1 + 0x1cdbc))

CookieCheckFunction(result)
return result
