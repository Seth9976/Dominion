// 函数: sub_594410
// 地址: 0x594410
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int128_t* i_8 = arg3
void* var_20 = arg2
int128_t* i_9 = i_8
void* i = (arg2 - i_8) & 0xfffffff0
int128_t var_18

if (i s> 0x200)
    int32_t esi_1 = arg4
    
    do
        if (esi_1 s<= 0)
            int128_t* ecx_7 = (arg2 - i_8) s>> 4
            int128_t* var_1c_1 = ecx_7
            int32_t j = ecx_7 s>> 1
            
            if (j s> 0)
                i = &i_8[j]
                
                do
                    j -= 1
                    var_18 = *(i - 0x10)
                    sub_596680(&var_18, j, i_8, ecx_7, &var_18, arg5)
                    i -= 0x10
                    ecx_7 = var_1c_1
                while (j s> 0)
                
                arg2 = var_20
            
            if (ecx_7 s< 2)
                goto label_59460b
            
            void* eax_19 = arg2 - 0x10
            void* var_1c_2 = eax_19
            void* esi_5
            
            do
                var_18 = *eax_19
                *eax_19 = *i_8
                int32_t eax_21 = (eax_19 - i_8) s>> 4
                sub_596680(eax_21, 0, i_8, eax_21, &var_18, arg5)
                esi_5 = eax_19 - i_8
                eax_19 = var_1c_2 - 0x10
                var_1c_2 = eax_19
            while ((esi_5 & 0xfffffff0) s>= 0x20)
            CookieCheckFunction(eax_19)
            return eax_19
        
        void* var_28
        sub_595450(i, i_8, &var_28, arg2, arg5)
        esi_1 = (esi_1 s>> 1) + (esi_1 s>> 2)
        int128_t* i_10
        
        if (((var_28 - i_8) & 0xfffffff0) s>= ((var_20 - i_10) & 0xfffffff0))
            sub_594410(esi_1, arg5)
            arg2 = var_28
            var_20 = arg2
        else
            sub_594410(esi_1, arg5)
            i_8 = i_10
            arg2 = var_20
            i_9 = i_8
        
        i = (arg2 - i_8) & 0xfffffff0
    while (i s> 0x200)

if (i_8 != arg2)
    int128_t* i_3 = &i_8[1]
    int128_t* i_5 = i_3
    
    if (i_3 != arg2)
        void* i_7 = i_8
        
        do
            void* i_2 = i_3
            var_18 = *i_3
            
            if (arg5(&var_18, i_8) == 0)
                void* i_6 = i_7
                
                if (arg5(&var_18, i_7) != 0)
                    void* i_4 = i_2
                    char i_1
                    
                    do
                        *i_4 = *i_6
                        i_4 = i_6
                        i_6 -= 0x10
                        i_1 = arg5(&var_18, i_6)
                    while (i_1 != 0)
                    i_2 = i_4
                    i_8 = i_9
                
                i = i_2
                i_3 = i_5
                *i = var_18
            else
                void* count = i_3 - i_8
                i = memmove(i_3 - count + 0x10, i_8, count)
                *i_8 = var_18
            
            i_7 += 0x10
            i_3 = &i_3[1]
            i_5 = i_3
        while (i_3 != var_20)

label_59460b:
CookieCheckFunction(i)
return i
