// 函数: sub_577870
// 地址: 0x577870
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t result = 0
int32_t i = 0x13
int32_t* eax_2 = arg1 + 0x1654

do
    int32_t ecx = *eax_2
    
    if (ecx == 0)
        break
    
    *(arg2 + (result << 2)) = ecx
    i += 1
    result += 1
    eax_2 = &eax_2[4]
while (i s< 0x21)

int32_t i_1 = 0x22
void* ebx_1 = arg1 + 0x1744
int32_t i_5 = 0x22
void* var_c98 = ebx_1

do
    int32_t eax_3 = *ebx_1
    
    if (eax_3 == 0)
        break
    
    *(arg2 + (result << 2)) = eax_3
    result += 1
    
    if (*ebx_1 == 0xf3a)
        int32_t var_c8c
        uint32_t eax_5 = sub_590990(&var_c8c, 0xffffffff, arg1, 5, &var_c8c)
        
        if (eax_5 != 0)
            if (eax_5 != 1)
                sub_591930()
            
            eax_5 = zx.d(var_c8c.w)
            
            if (eax_5 u>= 0x320)
                sub_591930()
        
        i_1 = i_5
        *(arg2 + (result << 2)) = *(eax_5 * 0x64 + arg1 + 0x1a4c)
        result += 1
    
    i_1 += 1
    ebx_1 += 0x10
    i_5 = i_1
while (i_1 s< 0x26)

int32_t ecx_3 = 0
void* eax_10 = arg1 + 0x1794

for (int32_t i_2 = 0x27; i_2 s< 0x47; )
    int32_t edx = *eax_10
    
    if (edx == 0)
        break
    
    *(arg2 + (result << 2)) = edx
    result += 1
    ecx_3.b = *eax_10 == 0x1301
    i_2 += 1
    eax_10 += 0x10

if (ecx_3 != 0)
    int32_t i_6 = 0x3d
    void* eax_12 = arg1 + 0xec4
    int32_t i_3
    
    do
        int32_t ecx_4 = *eax_12
        
        if (ecx_4 != 0)
            *(arg2 + (result << 2)) = ecx_4
            result += 1
        
        eax_12 += 4
        i_3 = i_6
        i_6 -= 1
    while (i_3 != 1)

void* eax_13 = var_c98

for (int32_t i_4 = 0x22; i_4 s< 0x26; )
    int32_t edx_1 = *eax_13
    
    if (edx_1 != 0)
        uint32_t eax_14
        int32_t edx_2
        eax_14, edx_2 = sub_5754f0(eax_13, edx_1, arg1, 0, 0x800)
        
        if (eax_14.b != 0)
            if (i_4 != 0)
                if (i_4 - 7 u> 0x41)
                    edx_2 = sub_591930()
                
                if (i_4 s>= 0x48)
                    edx_2 = sub_591930()
                
                eax_14 = *(arg1 + i_4 * 0x10 + 0x152c)
            
            if (i_4 == 0 || eax_14 == 0)
                sub_63b870(eax_14, &data_801800, "which != CARDID_NULL", 
                    "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x23f2, "ProphecyCard")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            uint32_t ecx_8 = zx.d(eax_14.w)
            
            if (ecx_8 u>= 0x320)
                edx_2 = sub_591930()
            
            void* eax_19 = ecx_8 * 0x64 + arg1
            
            if (*(eax_19 + 0x1a4c) == 0x121c)
                if (ecx_8 u>= 0x320)
                    edx_2 = sub_591930()
                
                if (sub_583f70(eax_19, edx_2, arg1, 0x1200, *(eax_19 + 0x1a50)) == 0)
                    int32_t j = 0
                    void* eax_21 = arg1 + 0xd4c
                    
                    do
                        int32_t edx_3 = *eax_21
                        
                        if (edx_3 == 0)
                            break
                        
                        *(arg2 + (result << 2)) = edx_3
                        j += 1
                        result += 1
                        eax_21 += 4
                    while (j s< 0xa)
                    
                    int32_t ecx_10 = *(arg1 + 0xe64)
                    
                    if (ecx_10 != 0)
                        int32_t eax_22 = 0
                        
                        if (result s> 0)
                            do
                                if (*(arg2 + (eax_22 << 2)) == ecx_10)
                                    goto label_577ae3
                                
                                eax_22 += 1
                            while (eax_22 s< result)
                        
                        *(arg2 + (result << 2)) = ecx_10
                        result += 1
                    
                label_577ae3:
                    int32_t ecx_11 = *(arg1 + 0xebc)
                    
                    if (ecx_11 != 0)
                        int32_t eax_23 = 0
                        
                        if (result s> 0)
                            do
                                if (*(arg2 + (eax_23 << 2)) == ecx_11)
                                    goto label_5779fe
                                
                                eax_23 += 1
                            while (eax_23 s< result)
                        
                        *(arg2 + (result << 2)) = ecx_11
                        CookieCheckFunction(result + 1)
                        return result + 1
            
            break
        
        eax_13 = var_c98
    
    i_4 += 1
    eax_13 += 0x10
    var_c98 = eax_13

label_5779fe:
CookieCheckFunction(result)
return result
