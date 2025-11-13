// 函数: sub_637c10
// 地址: 0x637c10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t esi = arg5
int128_t* i_11 = arg3
void* var_44 = arg2
int128_t* i_13 = i_11
void* i = (arg2 - i_11) & 0xfffffff0
int32_t var_3c = esi
void* i_7
int128_t var_30

for (; i s> 0x200; i = (arg2 - i_11) & 0xfffffff0)
    if (arg4 s<= 0)
        int32_t i_9 = (arg2 - i_11) s>> 4
        i_7 = i_9
        i = i_9 s>> 1
        
        if (i s> 0)
            void* ecx_9 = &i_11[i]
            
            do
                void* i_8 = i_7
                var_30 = *(ecx_9 - 0x10)
                sub_596680(i - 1, i - 1, i_11, i_8, &var_30, esi)
                i -= 1
                ecx_9 -= 0x10
            while (i s> 0)
            
            arg2 = var_44
        
        if (i_7 s< 2)
            goto label_637e66
        
        void* i_10 = arg2 - 0x10
        i_7 = i_10
        void* esi_2
        
        do
            var_30 = *i_10
            *i_10 = *i_11
            int32_t eax_19 = (i_10 - i_11) s>> 4
            sub_596680(eax_19, 0, i_11, eax_19, &var_30, var_3c)
            esi_2 = i_10 - i_11
            i_10 = i_7 - 0x10
            i_7 = i_10
        while ((esi_2 & 0xfffffff0) s>= 0x20)
        CookieCheckFunction(i_10)
        return i_10
    
    sub_595450(i, i_11, &i_7, arg2, esi)
    int32_t ecx_3 = (arg4 s>> 1) + (arg4 s>> 2)
    arg4 = ecx_3
    int128_t* i_12
    
    if (((i_7 - i_11) & 0xfffffff0) s>= ((var_44 - i_12) & 0xfffffff0))
        sub_637c10(ecx_3, esi)
        arg2 = i_7
        var_44 = arg2
    else
        sub_637c10(ecx_3, esi)
        i_11 = i_12
        arg2 = var_44
        i_13 = i_11

if (i_11 != arg2)
    i = &i_11[1]
    void* i_2 = i
    
    if (i != arg2)
        i_7 = i_11
        
        do
            void* i_3 = i
            var_30 = *i
            
            if (esi(&var_30, i_11) == 0)
                void* i_6 = i_7
                void* i_5 = i_6
                
                if (var_3c(&var_30, i_6) != 0)
                    char i_1
                    
                    do
                        void* i_4 = i_3
                        int128_t xmm0_6 = *i_5
                        i_3 = i_5
                        i_5 -= 0x10
                        *i_4 = xmm0_6
                        i_1 = var_3c(&var_30, i_5)
                    while (i_1 != 0)
                    i_11 = i_13
                
                esi = var_3c
                *i_3 = var_30
            else
                uint32_t count = i_2 - i_11
                memmove(i_2 - count + 0x10, i_11, count)
                *i_11 = var_30
            
            i_7 += 0x10
            i = i_2 + 0x10
            i_2 = i
        while (i != var_44)

label_637e66:
CookieCheckFunction(i)
return i
