// 函数: sub_4af740
// 地址: 0x4af740
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
int32_t* ebp = &__saved_ebp
__security_cookie
int32_t ebx
ebx.b = 0
int32_t* edi = arg1
int32_t* eax_2 = *arg2

if (eax_2 == 7)
label_4afa9d:
    ebx.b = 1
label_4afaa2:
    eax_2.b = ebx.b
    *arg2 = 0
    CookieCheckFunction(eax_2)
    return eax_2

char const* const var_360
int32_t var_35c_4
char const* const var_358_4
char* ecx_11

if (eax_2 != 1 || (arg2[1].b & 6) == 0)
label_4af7fd:
    eax_2 = *arg2
    
    if (eax_2 == 2 || eax_2 == 3)
        arg2[0x1f]
        arg2[0x1d]
        void* eax_19 = eax_2 - 2
        
        if (eax_2 != 2)
            eax_2 = eax_19 - 1
            
            if (eax_19 != 1)
                var_358_4 = "PressEnd"
                var_35c_4 = 0x317
                var_360 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp"
                ecx_11 = "Halt"
            label_4aface:
                sub_63b870(eax_2, &data_801800, ecx_11, var_360, var_35c_4, var_358_4)
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            eax_2 = data_cc8d5c
            
            if (eax_2 == 0)
                goto label_4afab8
            
            if (eax_2[0x141a] != 0)
                sub_4b9480()
                
                if (data_8db664 != 0x7ec)
                    if (data_be220c != 0)
                        data_be220c = 0
                        data_b7d418 = 0
                    
                    sub_5cb070()
                else
                    sub_4d46e0(5, 0)
            
            ebx.b = 1
        else
            void var_33c
            
            if (arg2[0x1e] f- arg2[0x1c] <= 0f)
                if (data_8db664 == 0)
                    eax_2 = data_cc8d5c
                    
                    if (eax_2 == 0)
                        goto label_4afab8
                    
                    if (eax_2[0x141a] == 0)
                        ebx.b = 1
                    else
                        sub_4b9480()
                        
                        if (data_8db664 != 0x7ec)
                            if (data_be220c != 0)
                                data_be220c = 0
                                data_b7d418 = 0
                            
                            eax_2 = sub_5cb070()
                            
                            if (eax_2 != 0)
                                ebx.b = 1
                            else
                                sub_5f4e70(eax_2 + 1)
                                ebx.b = 1
                        else
                            sub_4d46e0(5, 0)
                            ebx.b = 1
                else
                    sub_67b3b0(sub_694540(eax_19, edi, &var_33c, &data_7ffb94, 4), 0, &var_33c, 
                        0x80, 0)
                    ebx.b = 1
            else if (data_8db664 == 0)
                eax_2 = data_cc8d5c
                
                if (eax_2 == 0)
                    goto label_4afab8
                
                if (eax_2[0x141a] == 0)
                    ebx.b = 1
                else
                    sub_4b9480()
                    
                    if (data_8db664 != 0x7ec)
                        if (data_be220c != 0)
                            data_be220c = 0
                            data_b7d418 = 0
                        
                        if (sub_5cb070() != 0)
                            ebx.b = 1
                        else
                            sub_5f4e70(nullptr)
                            ebx.b = 1
                    else
                        sub_4d46e0(5, 0)
                        ebx.b = 1
            else
                sub_67b3b0(sub_694540(eax_19, edi, &var_33c, &data_7ffba4, 4), 0, &var_33c, 0x40, 0)
                ebx.b = 1
    else if (eax_2 == 4 || eax_2 == 5)
        ebx.b = 1
    else if (eax_2 == 6)
        float xmm0_2 = arg2[0x1f] f- arg2[0x1d]
        void* var_358_2 = &arg2[0x1e]
        float var_344 = arg2[0x1e] f- arg2[0x1c]
        float var_340_2 = xmm0_2
        sub_61c270(&var_344, &arg2[2], arg2.w, edi, arg1, 2, &data_7ffb14, &var_344)
        ebx.b = 1
    else if ((arg2[1].b & 2) != 0)
        int32_t eax_15 = (*arg2[0xe])()
        
        if (eax_15 == (*arg2[2])())
            eax_2 = eax_15(&arg2[0xe], &arg2[2])
            
            if (eax_2.b != 0)
                sub_4af6b0(eax_2, arg2, edi, ebp, 0)
                ebx.b = 1
else
    arg1 = (*arg2[0xe])()
    
    if (arg1 != (*arg2[2])())
        goto label_4af7fd
    
    char eax_9
    eax_9, arg1 = arg1(&arg2[0xe], &arg2[2])
    
    if (eax_9 == 0)
        goto label_4af7fd
    
    eax_2 = data_cc8d5c
    
    if (eax_2 == 0)
    label_4afab8:
        var_358_4 = "GetClient"
        var_35c_4 = 0x7b
        ecx_11 = "gClient"
        var_360 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
        goto label_4aface
    
    int32_t ecx_2 = *eax_2
    bool c_1 = ecx_2 u< arg2[0x1a]
    int32_t eax_10 = eax_2[1]
    int32_t temp5_1 = arg2[0x1b]
    eax_2 = sbb.d(eax_10, temp5_1, c_1)
    bool s_1 = sbb.d(eax_10, temp5_1, c_1) s< 0
    bool o_1 = unimplemented  {sbb eax, dword [esi+0x6c]}
    
    if (not(s_1)
            && ((sbb.d(eax_10, temp5_1, c_1) != 0 && s_1 == o_1) || ecx_2 - arg2[0x1a] u> 0x1f4))
        sub_4af6b0(eax_2, arg2, edi, ebp, 1)
        *arg2 = 7
        uint32_t eax_11
        eax_11.b = 1
        CookieCheckFunction(eax_11)
        return eax_11
    
    sub_4af6b0(eax_2, arg2, edi, ebp, 0)
    ebx.b = 1

if (*arg2 != 7)
    goto label_4afaa2

goto label_4afa9d
