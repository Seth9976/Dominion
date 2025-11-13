// 函数: sub_61e6d0
// 地址: 0x61e6d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76b41b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
__chkstk(0x13f8)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result = sub_4b9370()

if (result.b == 0)
    result = data_cc8d5c
    
    if (result == 0)
    label_61eb71:
        sub_63b870(result, &data_801800, "gClient", 
            "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 0x7b, "GetClient")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    if (*(result + 0x5044) == 0)
        void* eax_3 = sub_61dad0()
        int32_t var_11e0
        char eax_4 = sub_61dba0(eax_3, &var_11e0)
        int32_t ecx_2 = data_171efc8
        
        if (eax_4 == 0)
            result = data_cc8d5c
            
            if (result == 0)
                goto label_61eb71
            
            *(result + 0x5044) = 0xa
            *(result + 0x5058) = ecx_2
        else
            int32_t eax_5 = *(eax_3 + ecx_2 * 0xc + 8)
            int32_t var_11dc_1 = eax_5
            
            if ((*(eax_3 + 4) & 4) != 0 || eax_5 == 0)
            label_61e784:
                void* ecx_5 = data_cc8d5c
                
                if (ecx_5 == 0)
                    sub_63b870(eax_5, &data_801800, "gClient", 
                        "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 0x7b, "GetClient")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                int32_t* esi = sub_4baf70(ecx_5 + 0x507c)
                uint32_t count = 0x1160
                int32_t c = 0
                int32_t* var_11d8_1 = esi
                int32_t eax_7 = esi[0x4ca]
                char _Destination
                char* var_38_1 = &_Destination
                int64_t var_11d0
                __builtin_memset(&var_11d0, 0, 0x30)
                char* const var_11a0 = &data_801800
                char* const var_119c = &data_801800
                char* const var_1198 = &data_801800
                int32_t var_1194_1 = 0
                memset(var_38_1, c, count)
                int32_t var_14_1 = 0
                count.q = 0
                int32_t var_117c_1 = 1
                int32_t var_1178_1 = *(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x4250)
                int32_t var_1180_1 = *(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 8)
                char* const _Source = &data_801800
                uint32_t _Count = 0x10
                char* _Source_1 = *sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
                
                if (_Source_1 != 0)
                    _Source = _Source_1
                
                strncpy(&_Destination, _Source, _Count)
                int32_t eax_13 = *eax_3
                int32_t ecx_13 = data_171efc8
                int32_t var_f4c_1 = eax_13
                char var_1181_1 = 0
                int32_t var_f50_1 = 3
                int128_t var_11b8
                int32_t edx_5 = (eax_13 + 1) << 0x1c | (var_11b8.d & 0xffffffd) | 2
                var_11b8.d = edx_5
                void var_f64
                
                if (ecx_13 == 4 || ecx_13 == 9)
                    edx_5 |= 0x40
                    void var_1418
                    __builtin_memcpy(&var_1418, &_Destination, 0x22c)
                    __builtin_memcpy(&_Destination, &var_f64, 0x22c)
                    __builtin_memcpy(&var_f64, &var_1418, 0x22c)
                    esi = var_11d8_1
                    ecx_13 = data_171efc8
                
                var_11b8.d = edx_5 | 0x180
                int128_t var_11c8
                var_11c8:0xc.d = var_11e0 << 4 | ecx_13
                int64_t var_11a8
                var_11a8.d = 0x17
                var_14_1.b = 1
                char* const var_11d4
                sub_63d850(&var_119c, sub_61d910(&var_11d4, ecx_13))
                var_14_1.b = 2
                
                if (data_cf65bc != 0)
                    char* eax_20 = var_11d4
                    
                    if (eax_20 != 0 && *eax_20 != 0)
                        char* eax_21 = sub_63d4e0(&var_11d4)
                        int32_t temp0_1 = *(eax_21 + 4)
                        *(eax_21 + 4) -= 1
                        
                        if (temp0_1 == 1)
                            sub_64c080(eax_21, *(eax_21 + 0xc) + 0x10)
                            var_11d4 = &data_801800
                
                var_14_1.b = 0
                int32_t var_30_2 = 2
                *esi = var_11dc_1
                esi[4] = var_11c8.d
                int32_t ecx_18 = var_11c8:8.d
                esi[5] = var_11c8:4.d
                esi[6] = ecx_18
                esi[7] = var_11c8:0xc.d
                esi[8] = var_11b8.d
                esi[9] = var_11b8:4.d
                esi[0xa] = var_11b8:8.d
                esi[0xb] = var_11b8:0xc.d
                esi[0xc] = var_11a8.d
                esi[0xd] = var_11a8:4.d
                sub_63d850(&esi[0xe], &var_11a0)
                sub_63d850(&esi[0xf], &var_119c)
                sub_63d850(&esi[0x10], &var_1198)
                int32_t ecx_22 = 0
                esi[0x46a] = 0
                
                if (var_117c_1 != 0)
                    __builtin_memcpy(&esi[0x12], &_Destination, 0x22c)
                    esi = var_11d8_1
                    ecx_22 = 1
                    esi[0x46a] = 1
                
                if (var_f50_1 != 0)
                    __builtin_memcpy(ecx_22 * 0x22c + &esi[0x12], &var_f64, 0x22c)
                    esi = var_11d8_1
                    esi[0x46a] += 1
                    ecx_22 = esi[0x46a]
                
                int32_t i = 0
                
                if (ecx_22 s> 0)
                    void* ecx_23 = &esi[0x19]
                    
                    do
                        *ecx_23 = i
                        ecx_23 += 0x22c
                        i += 1
                    while (i s< esi[0x46a])
                
                if (var_11dc_1 == 0)
                    sub_4b3c70()
                
                int32_t var_14_2 = 0xffffffff
                Concurrency::details::_Micro_queue::_Pop_finalizer::~_Pop_finalizer(&var_11c8)
                eax_5 = eax_7
            else
                eax_5 = sub_4b50b0(eax_5)
                
                if (eax_5 == 0)
                    goto label_61e784
            
            result = sub_4b0e60(eax_5)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
