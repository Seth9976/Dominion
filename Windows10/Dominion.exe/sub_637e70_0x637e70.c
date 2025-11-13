// 函数: sub_637e70
// 地址: 0x637e70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int128_t* i_9 = arg2
int128_t* i_7 = arg3
int32_t ecx = arg5
void* i = i_9 - i_7
int128_t* i_10 = i_9
int128_t* i_13 = i_7
int32_t var_78 = ecx
int128_t* i_2
int128_t var_60

for (; i s>= 0x738; i = i_9 - i_7)
    if (arg4 s<= 0)
        void* j_1 = i_9 - i_7
        i = j_1 s/ 0x38
        i_2 = i
        int32_t j = i s>> 1
        
        if (j s> 0)
            void* edi_1 = i_7 + j * 0x38
            
            do
                int128_t xmm0_9 = *(edi_1 - 0x38)
                edi_1 -= 0x38
                var_60 = xmm0_9
                int128_t var_50_2 = *(edi_1 + 0x10)
                int128_t var_40_2 = *(edi_1 + 0x20)
                int64_t var_30_2 = *(edi_1 + 0x30)
                sub_6393e0(&var_60, j - 1, i_7, i_2, &var_60, ecx)
                j -= 1
                ecx = var_78
            while (j s> 0)
            
            i = i_2
        
        if (i s< 2)
            goto label_6381fa
        
        void* i_5 = i_10 - 0x38
        void* i_11 = i_5
        
        do
            i_2 = i_5
            
            if (j_1 s/ 0x38 s>= 2)
                var_60 = *i_11
                int128_t var_50_3 = *(i_11 + 0x10)
                int128_t var_40_3 = *(i_11 + 0x20)
                int64_t var_30_3 = *(i_11 + 0x30)
                *i_11 = *i_7
                int32_t eax_29 = (i_11 - i_7) s/ 0x38
                *(i_11 + 0x10) = i_7[1]
                *(i_11 + 0x20) = i_7[2]
                *(i_11 + 0x30) = i_7[3].q
                sub_6393e0(eax_29, 0, i_7, eax_29, &var_60, ecx)
            
            ecx = var_78
            i_11 -= 0x38
            i_5 = i_11
            j_1 = i_2 - i_7
        while (j_1 s>= 0x70)
        
        CookieCheckFunction(i_5)
        return i_5
    
    sub_638820(i, i_7, &i_2, i_9, ecx)
    arg4 = (arg4 s>> 1) + (arg4 s>> 2)
    int32_t var_84_2 = var_78
    int128_t* i_12
    
    if ((i_2 - i_13) s/ 0x38 s>= (i_9 - i_12) s/ 0x38)
        sub_637e70(arg4, var_84_2)
        i_9 = i_2
        i_7 = i_13
        i_10 = i_9
    else
        sub_637e70(arg4, var_84_2)
        i_7 = i_12
        i_9 = i_10
        i_13 = i_7
    
    ecx = var_78

if (i_7 != i_9)
    i = i_7 + 0x38
    void* i_3 = i
    
    if (i != i_9)
        i_2 = i_7
        
        do
            void* i_4 = i
            var_60 = *i
            int128_t xmm0_2 = *(i + 0x10)
            int128_t xmm0_3 = *(i + 0x20)
            int64_t xmm0_4 = *(i + 0x30)
            
            if (ecx(&var_60, i_7) == 0)
                void* i_6 = i_2
                void* i_8 = i_6
                
                if (var_78(&var_60, i_6) != 0)
                    char i_1
                    
                    do
                        *i_4 = *i_8
                        *(i_4 + 0x10) = *(i_8 + 0x10)
                        *(i_4 + 0x20) = *(i_8 + 0x20)
                        *(i_4 + 0x30) = *(i_8 + 0x30)
                        i_4 = i_8
                        i_8 -= 0x38
                        i_1 = var_78(&var_60, i_8)
                    while (i_1 != 0)
                
                i_7 = i_13
                *i_4 = var_60
                *(i_4 + 0x10) = xmm0_2
                *(i_4 + 0x20) = xmm0_3
                *(i_4 + 0x30) = xmm0_4
            else
                uint32_t count = i_3 - i_7
                memmove(i_3 - count + 0x38, i_7, count)
                *i_7 = var_60
                i_7[1] = xmm0_2
                i_7[2] = xmm0_3
                i_7[3].q = xmm0_4
            
            i_2 += 0x38
            i = i_3 + 0x38
            ecx = var_78
            i_3 = i
        while (i != i_10)

label_6381fa:
CookieCheckFunction(i)
return i
