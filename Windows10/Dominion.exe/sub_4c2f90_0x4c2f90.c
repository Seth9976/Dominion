// 函数: sub_4c2f90
// 地址: 0x4c2f90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = data_cc8d5c
void* var_c = eax
int32_t* edi = arg1
int32_t* var_8 = edi
char const* const var_3c_1
int32_t var_38_1
char const* const var_34_4
char* ecx

if (eax != 0)
    if (data_8db7f4 == 1)
        uint32_t eax_1 = sub_64e7a0(arg1)
        sub_665db0(eax_1, &data_8dbe90, eax_1, 0x3f800000, 0xffffffff, 0)
        data_8db7f8 = 0
    
    int32_t var_1c
    int32_t ebx_1 = sub_4c2720(arg2, &var_1c)
    
    if (arg2 == 0)
        ebx_1 += 1
    
    int32_t eax_4 = data_8db7fc
    int32_t eax_6 = eax_4 * 6
    int32_t ebx_2 = ebx_1 - eax_6
    int32_t var_34_1 = 0xffffffff
    
    if (ebx_2 s> 6)
        ebx_2 = 6
    
    sub_666120(6, &data_8dbd88, edi, ebx_2)
    int32_t edx_2 = eax_4
    
    if (edx_2 != 0)
        uint32_t eax_7 = sub_64e7a0(edi)
        sub_665db0(eax_7, &data_8dbdc4, eax_7, 0x3f800000, 0xffffffff, 0)
        edx_2 = eax_4
    
    void* result = (ebx_1 + 5) s/ 6 - 1
    
    if (edx_2 s< result)
        uint32_t eax_8 = sub_64e7a0(edi)
        result = sub_665db0(eax_8, &data_8dbdd0, eax_8, 0x3f800000, 0xffffffff, 0)
        edx_2 = eax_4
    
    void* ebx_3 = nullptr
    
    if (ebx_2 s<= 0)
        return result
    
    while (true)
        if (arg2 != 0 || ebx_3 != 0 || edx_2 != 0)
            int32_t eax_10
            eax_10.b = arg2 == 0
            int32_t edi_8 = (((var_1c - var_c - 0x28) s>> 5) - eax_10 + eax_6 + ebx_3) << 5
            result = sub_4bba60(ebx_3 * 0x24 + &data_19e5670, var_8, "tblFriends", ebx_3)
            
            if (result == 0)
                edi = var_8
            else
                void* eax_12 = sub_624450(*(edi_8 + var_c + 0x34))
                uint32_t eax_13 = sub_64e7a0(result)
                sub_665db0(eax_13, eax_12, eax_13, 0x3f800000, 0xffffffff, 0)
                eax = *(edi_8 + var_c + 0x38)
                
                if (eax u> 5)
                    var_34_4 = "FriendsUpdateTable"
                    var_38_1 = 0x14c4
                label_4c332f:
                    var_3c_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp"
                    ecx = "Halt"
                    break
                
                void** esi_6
                
                switch (eax)
                    case nullptr
                        var_34_4 = "FriendsUpdateTable"
                        var_38_1 = 0x14b3
                        goto label_4c332f
                    case 1
                        esi_6 = &data_8dbe48
                    case 2
                        esi_6 = &data_8dbe54
                    case 3
                        esi_6 = &data_8dbe60
                    case 4
                        esi_6 = &data_8dbe6c
                    case 5
                        esi_6 = &data_8dbe78
                
                uint32_t eax_16 = sub_64e7a0(var_8)
                sub_665db0(eax_16, esi_6, eax_16, 0x3f800000, ebx_3, 0)
                void* eax_19 = var_c + 0x30 + edi_8
                void* var_3c_3 = ebx_3
                eax = sub_666380(eax_19, &data_8dbdb8, var_8, eax_19)
                int32_t esi_7 = data_cc8d5c
                
                if (esi_7 == 0)
                    goto label_4c2faf
                
                int32_t eax_20 = *(edi_8 + esi_7 + 0x34)
                void** esi_9
                
                if (eax_20 s< 0)
                    int32_t eax_21 = neg.d(eax_20)
                    void** esi_8
                    
                    if (eax_21 == 2)
                        esi_8 = &data_8dbe30
                    else if (eax_21 == 3)
                        esi_8 = &data_8dbe24
                    else
                        esi_8 = &data_8dbe3c
                    
                    uint32_t eax_24 = sub_64e7a0(var_8)
                    sub_665db0(eax_24, esi_8, eax_24, 0x3f800000, ebx_3, 0)
                label_4c3219:
                    esi_9 = &data_8dbdac
                else if (data_8db7f4 != 1)
                label_4c3219_1:
                    esi_9 = &data_8dbdac
                else
                    int32_t i = 0
                    void* ecx_24 = sub_4bbdb0() + 0x58
                    
                    do
                        if (*(ecx_24 - 4) == 1 && *ecx_24 == *(edi_8 + esi_7 + 0x2c))
                            goto label_4c3219_1
                        
                        i += 1
                        ecx_24 += 0x22c
                    while (i s< 8)
                    
                    esi_9 = &data_8dbda0
                
                uint32_t eax_25 = sub_64e7a0(var_8)
                sub_665db0(eax_25, esi_9, eax_25, 0x3f800000, ebx_3, 0)
                
                if (arg2 != 0)
                    edi = var_8
                    uint32_t eax_33 = sub_64e7a0(edi)
                    result = sub_665db0(eax_33, &data_8dbe84, eax_33, 0x3f800000, ebx_3, 0)
                else
                    int32_t eax_27 = sub_4b9280(*(edi_8 + var_c + 0x2c))
                    void** esi_10
                    
                    if (eax_27 != 1)
                        if (eax_27 == 2)
                            esi_10 = &data_8dbdf4
                            goto label_4c32b3
                        
                        eax = eax_27 - 3
                        
                        if (eax_27 == 3)
                            esi_10 = &data_8dbe0c
                            goto label_4c32b3
                        
                        var_34_4 = "FriendsUpdateTable"
                        var_38_1 = 0x14fd
                        goto label_4c332f
                    
                    esi_10 = &data_8dbe00
                label_4c32b3:
                    uint32_t eax_32 = sub_64e7a0(var_8)
                    result = sub_665db0(eax_32, esi_10, eax_32, 0x3f800000, ebx_3, 0)
                    edi = var_8
        else
            uint32_t eax_9 = sub_64e7a0(edi)
            result = sub_665db0(eax_9, &data_8dbd94, eax_9, 0x3f800000, ebx_3, ebx_3.b)
        
        ebx_3 += 1
        
        if (ebx_3 s>= ebx_2)
            return result
        
        edx_2 = eax_4
else
label_4c2faf:
    var_34_4 = "GetClient"
    var_38_1 = 0x7b
    var_3c_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx = "gClient"

sub_63b870(eax, &data_801800, ecx, var_3c_1, var_38_1, var_34_4)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
