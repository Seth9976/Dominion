// 函数: sub_4b4cc0
// 地址: 0x4b4cc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
int32_t* eax_1 = __security_cookie ^ &__saved_ebp
int32_t* var_c = eax_1
void* edi = data_cc8d5c
int64_t var_18 = 0
int32_t var_1c = 3
int32_t var_10 = arg2
char const* const var_4c
int32_t var_48
char const* const var_44
char* ecx

if (edi != 0)
    eax_1 = *(edi + 0x5068)
    
    if (eax_1 u<= 4)
        switch (eax_1)
            case nullptr
                goto label_4b4dd3
            case 1, 3, 4
            label_4b4d58:
                eax_1 = sub_4b9480()
                
                if (eax_1 != arg3)
                    edi = data_cc8d5c
                label_4b4dd3:
                    
                    if (edi != 0)
                        Concurrency::details::_Micro_queue::_Pop_finalizer::~_Pop_finalizer(arg3
                            + 0x10)
                        int32_t ecx_7 = *(edi + 0x5088)
                        *(edi + 0x5088) = zx.d(*(arg3 + 0x1328))
                        *(arg3 + 0x1328) = ecx_7
                        *(edi + 0x508c) -= 1
                        __builtin_memset(arg4, 0, 0x18)
                        CookieCheckFunction(arg4)
                        return arg4
                else
                    eax_1 = data_cc8d5c
                    
                    if (eax_1 != 0)
                        if (eax_1[0x141a] == 1)
                            int32_t i = 0
                            
                            if (*(arg3 + 0x11a8) s> 0)
                                void* edx = arg3 + 0x68
                                
                                do
                                    *edx = 0
                                    edx += 0x22c
                                    i += 1
                                while (i s< *(arg3 + 0x11a8))
                        
                        void var_38
                        int128_t* eax_5 = sub_624070(&var_38, &var_1c, arg3, &var_38, 3)
                        *arg4 = *eax_5
                        *(arg4 + 0x10) = eax_5[1].q
                        CookieCheckFunction(arg4)
                        return arg4
            case 2
                int32_t ecx_1 = *(edi + 0x506c)
                
                if (ecx_1 != 0)
                    uint32_t eax_2 = zx.d(ecx_1.w)
                    
                    if (eax_2 u< *(edi + 0x5080))
                        eax_1 = eax_2 * 0x1330 + *(edi + 0x507c)
                        
                        if (eax_1[0x4ca] != ecx_1)
                            eax_1 = nullptr
                    else
                        eax_1 = nullptr
                else
                    eax_1 = nullptr
                
                if (eax_1 == 0)
                    goto label_4b4dd3
                
                goto label_4b4d58
        
        goto label_4b4cf0
    
    var_44 = "ActiveGameExists"
    var_48 = 0x7a5
    var_4c = "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp"
    ecx = "Halt"
else
label_4b4cf0:
    var_44 = "GetClient"
    var_48 = 0x7b
    var_4c = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx = "gClient"

sub_63b870(eax_1, &data_801800, ecx, var_4c, var_48, var_44)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
