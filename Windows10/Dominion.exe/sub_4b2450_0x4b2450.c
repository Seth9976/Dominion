// 函数: sub_4b2450
// 地址: 0x4b2450
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_762950
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
void* ecx = __chkstk(0x11e8)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(ecx + 0x5044) != 0)
    int32_t* ecx_1 = *(ecx + 0x5040)
    
    if (ecx_1 != 0)
        sub_4bc4b0(ecx_1)
        *(ecx + 0x5040) = 0

int128_t* result = *(ecx + 0x5044)
*(ecx + 0x5044) = 0
char const* const var_38_1
int32_t var_34_1
char const* const var_30_4
char* ecx_9

if (result u> 0xb)
    var_30_4 = "GameQueueStartUpdate"
    var_34_1 = 0x8b0
    ecx_9 = "Halt"
label_4b2b72:
    var_38_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp"
label_4b2b7c:
    sub_63b870(result, &data_801800, ecx_9, var_38_1, var_34_1, var_30_4)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

switch (result)
    case nullptr
        goto label_4b24f1
    case 1
        data_8db598 = 2
        sub_4d46e0(1, 0)
        data_8db5c0 = 0x27
        sub_4d46e0(5, 0)
        result = sub_4b1e20(0)
        goto label_4b24f1
    case 2
        data_8db598 = 2
        sub_4d46e0(1, 0)
        data_8db5c0 = 0x27
        result = sub_4d46e0(5, 0)
        void* edi_1 = data_cc8d5c
        
        if (edi_1 != 0)
            char* const var_11a0_1 = &data_801800
            uint32_t count = 0x1160
            int64_t var_11d0
            __builtin_memset(&var_11d0, 0, 0x30)
            char* const var_119c_1 = &data_801800
            char* const var_1198_1 = &data_801800
            int32_t var_1194_1 = 0
            void var_1190
            memset(&var_1190, 0, count)
            int32_t var_14_1 = 0
            count.q = 0
            int32_t var_117c_1 = 0x3e8
            void* eax_4
            int32_t ecx_12
            eax_4, ecx_12 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
            int32_t var_30_5 = 0
            int32_t var_38_3 = 2
            int32_t var_1178_1 = *(eax_4 + 0x42b0)
            int32_t eax_6 = *(edi_1 + 0x505c)
            int32_t var_f50_1 = 3
            int32_t var_f4c_1 = 3
            int128_t var_11c8
            var_11c8:0xc.d = eax_6
            int64_t var_11a8
            var_11a8.d = 0x17
            int32_t var_30_6 = 2
            *(edi_1 + 0x5068) = 1
            *(edi_1 + 0x506c) = 0x7fffffff
            *(edi_1 + 0x5098) = 0x7fffffff
            sub_4d5e20(eax_6, edi_1 + 0x5098, &var_11d0, var_38_3, ecx_12)
            void var_1208
            sub_624070(&var_1208, 0x77f0a0, edi_1 + 0x5098, &var_1208, 0)
            sub_4da580(edi_1 + 0x5098, 0x7fffffff)
            result = Concurrency::details::_Micro_queue::_Pop_finalizer::~_Pop_finalizer(&var_11c8)
            goto label_4b24f1
    case 3
        data_8db598 = 2
        sub_4d46e0(1, 0)
        data_8db5c0 = 0x27
        sub_4d46e0(5, 0)
        char var_30_3 = 0
        *(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x7218)
        result = sub_4b1c60(arg1, var_30_3)
        goto label_4b24f1
    case 4
        sub_4b1f60()
        data_8db598 = 2
        sub_4d46e0(1, 0)
        data_8db5c0 = 0x27
        sub_4d46e0(5, 0)
        *(ecx + 0x5054)
        result = sub_4b1c60(arg1, 4)
    label_4b24f1:
        fsbase->NtTib.ExceptionList = ExceptionList
        CookieCheckFunction(result)
        return result
    case 5
        data_8db598 = 2
        sub_4d46e0(1, 0)
        data_8db5c0 = 0x27
        sub_4d46e0(5, 0)
        
        if (*(ecx + 0x5068) != 0)
            sub_4b1f60()
        
        void* esi_1 = data_cc8d5c
        result = *(ecx + 0x5058)
        
        if (esi_1 != 0)
            *(esi_1 + 0x506c) = result
            *(esi_1 + 0x5068) = 1
            *(esi_1 + 0x5098) = result
            result = sub_4da880()
            
            if (result.b != 0)
                if (*(esi_1 + 0x6240) s< 2)
                    var_30_4 = "GameResumeLocal"
                    var_34_1 = 0x56a
                    ecx_9 = "save.setup.numPlayers >= 2"
                    goto label_4b2b72
                
                if (*(esi_1 + 0x50c8) s< 0xb)
                    result = sub_4b0bf0()
                    goto label_4b24f1
                
                void var_11f0
                result = sub_624070(&var_11f0, 0x77f0b0, esi_1 + 0x5098, &var_11f0, 0)
                int64_t var_11f8_1 = result[1].q
                
                if (*result != 1)
                    goto label_4b24f1
            
            result = sub_4b1fd0(1, *(ecx + 0x5058))
            goto label_4b24f1
    case 6
        data_8db598 = 2
        sub_4d46e0(1, 0)
        data_8db5c0 = 0x27
        sub_4d46e0(5, 0)
        
        if (*(ecx + 0x5068) != 0)
            sub_4b1f60()
        
        result = sub_4b0ca0(*(ecx + 0x5074))
        
        if (result.b == 0)
            result = sub_4b1fd0(2, *(ecx + 0x5074))
        
        goto label_4b24f1
    case 7
        result = data_cc8d5c
        
        if (result != 0)
            int32_t ecx_22 = *(result + 0x5068)
            
            if (ecx_22 == 1)
                if (*(result + 0x506c) != 0x7fffffff)
                    goto label_4b2acf
                
                data_8db598 = 2
                sub_4d46e0(3, 0)
                sub_4d46e0(1, 0)
                data_8db660 = 0x23
            label_4b2aed:
                sub_4b1f60()
                int32_t eax_16 = *(ecx + 0x5060)
                
                if (eax_16 == 1)
                    data_ccf6b0 = 1
                    void var_1200
                    int64_t xmm0_2 = *sub_60a040(&var_1200)
                    data_ccf6b8 = xmm0_2.d
                    result = xmm0_2:4.d
                    data_ccf6bc = result
                    data_ccf6b4 = 0
                    data_8db660 = 0x7ea
                else
                    result = eax_16 - 2
                    
                    if (eax_16 == 2)
                        int32_t ecx_28
                        ecx_28.b = 0
                        result = sub_61dc40(ecx_28)
                
                goto label_4b24f1
            
            if (ecx_22 != 2)
            label_4b2acf:
                data_8db598 = 2
                sub_4d46e0(1, 0)
                data_8db660 = 3
                goto label_4b2aed
            
            char eax_11 = (*(ecx + 0x5064) u>> 1).b & 1
            data_8db598 = ecx_22
            sub_4d46e0(1, 0)
            data_8db660 = 0x13
            int32_t ecx_23
            
            if (eax_11 == 0)
                ecx_23.b = sub_4c5750() != 0
                data_8dbfb0 = ecx_23
            else
                data_8dbfb0 = 1
            
            void* eax_12 = data_8dc144
            data_8dbfb8 = 0
            
            if (eax_12 != 0 && eax_12 != &data_801800)
                if (data_cf65bc != 0 && *eax_12 != 0)
                    char* eax_13 = sub_63d4e0(&data_8dc144)
                    int32_t temp2_1 = *(eax_13 + 4)
                    *(eax_13 + 4) -= 1
                    *(eax_13 + 4)
                    
                    if (temp2_1 == 1)
                        sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)
                
                data_8dc144 = &data_801800
            
            result = data_cc8d5c
            
            if (result != 0)
                if (*(result + 0x18) == 3)
                    ecx_23.b = 1
                    sub_4af000(ecx_23)
                
                if ((*(ecx + 0x5064) & 4) != 0)
                    int32_t* eax_14 = sub_4bb050(ecx + 0x507c, *(ecx + 0x5058))
                    Concurrency::details::_Micro_queue::_Pop_finalizer::~_Pop_finalizer(&eax_14[4])
                    int32_t edx_25 = *(ecx + 0x5088)
                    *(ecx + 0x5088) = zx.d(eax_14[0x4ca].w)
                    eax_14[0x4ca] = edx_25
                    *(ecx + 0x508c) -= 1
                
                goto label_4b2aed
    case 8
        data_8db598 = 2
        sub_4d46e0(1, 0)
        data_8db660 = 3
        result = sub_4b1f60()
        goto label_4b24f1
    case 9
        sub_4b1f60()
        *(ecx + 0x75b4)
        result = sub_4b1e20(4)
        goto label_4b24f1
    case 0xa
        data_8db598 = 2
        sub_4d46e0(1, 0)
        data_8db5c0 = 0x27
        sub_4d46e0(5, 0)
        *(ecx + 0x5058)
        result = sub_4b13f0(arg1)
        goto label_4b24f1
    case 0xb
        sub_4b1f60()
        data_8db598 = 2
        sub_4d46e0(1, 0)
        data_8db5c0 = 0x27
        sub_4d46e0(5, 0)
        *(ecx + 0x5058)
        result = sub_4b13f0(arg1)
        goto label_4b24f1

var_30_4 = "GetClient"
var_34_1 = 0x7b
var_38_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
ecx_9 = "gClient"
goto label_4b2b7c
