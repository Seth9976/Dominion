// 函数: sub_4da880
// 地址: 0x4da880
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_763ca6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* ecx
void* edx
ecx, edx = __chkstk(0x1394)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* i_4
uint32_t _Stream_2

if (*ecx != 1)
    _Stream_2 = "LocalGameLoad"
    i_4 = 0x6e9
    sub_63b870(&ExceptionList, &data_801800, "handle.gameType == GAME_LOCAL", 
        "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp", i_4, _Stream_2)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void var_1398
sub_4d8d70(&var_1398, ecx[1])
int32_t var_8_1 = 0
int32_t* eax_4 = data_1597da0
int32_t* i = sub_6a6e70(eax_4, &var_1398)
int32_t* i_1

if (i != 0)
    _Stream_2 = 0
    i_4 = i
    void var_1d4
    sub_6a4770(i, eax_4, &var_1d4, i_4, _Stream_2.b)
    sub_6a3220(i)
    _Stream_2 = sub_4d7240(ecx)
    var_8_1.b = 2
    sub_4b4ab0(edx + 8, _Stream_2)
    var_8_1.b = 0
    void var_1374
    Concurrency::details::_Micro_queue::_Pop_finalizer::~_Pop_finalizer(&var_1374)
    int32_t* i_5
    sub_4d8e50(&i_5, ecx[1])
    _Stream_2 = 0
    var_8_1.b = 3
    FILE* _Stream_1
    i = sub_69dec0(&_Stream_1)
    char* ecx_9
    
    if (i.b == 0)
        _Stream_2 = "LocalGameLoad"
        i_4 = 0x6f5
        ecx_9 = "Halt"
    label_4dad32:
        sub_63b870(i, &data_801800, ecx_9, "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp", 
            i_4, _Stream_2)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    FILE* _Stream = _Stream_1
    _Stream_2 = 2
    i_4 = nullptr
    fseek(_Stream, i_4, _Stream_2)
    _Stream_2 = _Stream
    int32_t _Stream_3 = ftell(_Stream_2)
    _Stream_2 = _Stream
    fclose(_Stream_2)
    _Stream_1 = nullptr
    uint32_t _Stream_4 = sub_687730(_Stream_3)
    _Stream_2 = _Stream_3
    i_4 = nullptr
    memset(_Stream_4, i_4, _Stream_2)
    void* eax_6 = data_1597da8
    int32_t** var_138c_1 = &i_4
    i_4 = i_5
    uint32_t i_2
    uint32_t eax_8 = i_2
    _Stream_2 = eax_8
    
    if (eax_8 != 0 && *eax_8 != 0)
        char* eax_9 = sub_63d4e0(&_Stream_2)
        *(eax_9 + 4) += 1
    
    if (sub_694780(_Stream_4, eax_6).b == 0)
    label_4dab7b:
        uint32_t _Stream_5 = sub_687730(_Stream_3)
        _Stream_2 = _Stream_3
        i_4 = nullptr
        memset(_Stream_5, i_4, _Stream_2)
        void* edi_2 = data_1597da4
        int32_t** var_138c_2 = &i_4
        i_4 = i_5
        uint32_t eax_14 = i_2
        _Stream_2 = eax_14
        
        if (eax_14 != 0 && *eax_14 != 0)
            char* eax_15 = sub_63d4e0(&_Stream_2)
            *(eax_15 + 4) += 1
        
        if (sub_694780(_Stream_5, edi_2).b != 0)
            if (_Stream_5 != 0)
                _Stream_2 = _Stream_5
                _aligned_free(_Stream_2)
            
            var_8_1.b = 6
            
            if (data_cf65bc != 0)
                i = i_2
                
                if (i != 0 && *i != 0)
                    i = sub_63d4e0(&i_2)
                    int32_t temp1_1 = i[1]
                    i[1] -= 1
                    
                    if (temp1_1 == 1)
                        sub_64c080(i, i[3] + 0x10)
                        i_2 = &data_801800
            
            int32_t var_8_5 = 7
        else
            if (_Stream_5 != 0)
                _Stream_2 = _Stream_5
                _aligned_free(_Stream_2)
            
            if (_Stream_4 != 0)
                _Stream_2 = _Stream_4
                _aligned_free(_Stream_2)
            
            var_8_1.b = 4
            
            if (data_cf65bc != 0)
                i = i_2
                
                if (i != 0 && *i != 0)
                    i = sub_63d4e0(&i_2)
                    int32_t temp2_1 = i[1]
                    i[1] -= 1
                    
                    if (temp2_1 == 1)
                        sub_64c080(i, i[3] + 0x10)
                        i_2 = &data_801800
            
            int32_t var_8_4 = 5
        
        goto label_4dac9c
    
    int32_t ecx_13 = 0
    
    while (true)
        i.b = *(ecx_13 + _Stream_4 - "TGG1" + "TGG1")
        
        if (i.b != (*"TGG1")[ecx_13])
            goto label_4dab7b
        
        ecx_13 += 1
        
        if (ecx_13 s>= 4)
            int32_t* i_3 = nullptr
            
            if (*(edx + 0x11a8) s> 0)
                uint32_t* edi_1 = _Stream_4 + 0x14
                void* esi_3 = edx + 0x11c4
                
                do
                    if (*(esi_3 - 0xc) != 0)
                        _Stream_2 = "LocalGameLoad"
                        i_4 = 0x70e
                        ecx_9 = "save.logs.logs[i].logBytes == NULL"
                        goto label_4dad32
                    
                    *(esi_3 + 4) = edi_1[1]
                    uint32_t ecx_14 = *edi_1
                    *esi_3 = ecx_14
                    
                    if (ecx_14 s< 0x1000)
                        ecx_14 = 0x1000
                    
                    *(esi_3 + 8) = 0
                    *(esi_3 - 4) = ecx_14
                    int32_t eax_11 = sub_687730(ecx_14)
                    *(esi_3 - 0xc) = eax_11
                    _Stream_2 = *edi_1
                    i_4 = edi_1[-3]
                    memcpy(eax_11, i_4, _Stream_2)
                    i = i_3 + 1
                    esi_3 += 0x18
                    i_3 = i
                    edi_1 = &edi_1[6]
                while (i s< *(edx + 0x11a8))
            
            if (_Stream_4 != 0)
                _Stream_2 = _Stream_4
                _aligned_free(_Stream_2)
            
            var_8_1.b = 8
            
            if (data_cf65bc != 0)
                i = i_2
                
                if (i != 0 && *i != 0)
                    i = sub_63d4e0(&i_2)
                    int32_t temp3_1 = i[1]
                    i[1] -= 1
                    
                    if (temp3_1 == 1)
                        sub_64c080(i, i[3] + 0x10)
                        i_2 = &data_801800
            
            int32_t var_8_3 = 9
            
            if (data_cf65bc != 0)
                i = i_1
                
                if (i != 0 && *i != 0)
                    i = sub_63d4e0(&i_1)
                    int32_t temp4_1 = i[1]
                    i[1] -= 1
                    
                    if (temp4_1 == 1)
                        sub_64c080(i, i[3] + 0x10)
            
            i.b = 1
            break
else
    int32_t var_8_2 = 1
label_4dac9c:
    
    if (data_cf65bc != 0)
        i = i_1
        
        if (i != 0 && *i != 0)
            i = sub_63d4e0(&i_1)
            int32_t temp0_1 = i[1]
            i[1] -= 1
            
            if (temp0_1 == 1)
                sub_64c080(i, i[3] + 0x10)
    
    i.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(i)
return i
