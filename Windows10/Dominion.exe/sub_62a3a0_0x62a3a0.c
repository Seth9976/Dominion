// 函数: sub_62a3a0
// 地址: 0x62a3a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char const* const var_44
int32_t var_40_1
char const* const var_3c_1
int32_t* eax
char* ecx

if (data_cc8d5c != 0)
    eax = sub_4b9480()
    void* ecx_1 = data_cc8d5c
    
    if (ecx_1 == 0)
        goto label_62a3bb
    
    if (*(ecx_1 + 0x5068) != 0)
        void* i_4 = sub_5da130(0xb80ad8, 0xbdfb60)
        void* i_3 = nullptr
        
        if (eax[0xb] != 2)
            i_3 = i_4
        
        if (data_1724a54 == 1)
            i_3 = 2
        
        void* i_1 = i_3
        void* eax_1 = sub_5a04d0(i_3)
        int32_t var_3c_2 = 0xffffffff
        sub_666120(eax_1, &data_bf1264, arg1, eax_1)
        sub_4d3b70(arg1)
        eax = data_cc8dc0
        
        if (eax != 0)
            int32_t eax_2 = eax[0xa]
            
            if (eax_2 == 0)
                goto label_62a4fd
            
            uint32_t eax_5
            void** edx_1
            
            if (eax_2 == 1)
                eax_5 = sub_64e7a0(arg1)
                edx_1 = &data_8dc674
            label_62a4ba:
                sub_665db0(eax_5, edx_1, eax_5, 0x3f800000, 0xffffffff, 0)
                uint32_t eax_6 = sub_64e7a0(arg1)
                sub_665db0(eax_6, &data_be3268, eax_6, 0x3f800000, 0xffffffff, 0)
            label_62a4fd:
                int32_t edx_2
                eax, edx_2 = sub_66b600(sub_64e7a0(sub_4bb9f0(0x1a979d0, arg1, "tbl_logEntries")), 
                    0xffffffff)
                int32_t* ecx_11 = eax
                void* esi_3 = edx_2 - ecx_11
                void* var_10 = esi_3
                
                if (edx_2 - ecx_11 s<= 0x80)
                    void* eax_9 = esi_3
                    void* esi_4 = data_cc8d5c
                    
                    if (eax_1 s< esi_3)
                        eax_9 = eax_1
                    
                    eax = ecx_11
                    
                    if (ecx_11 s< 0)
                        eax = nullptr
                    
                    if (ecx_11 s< 0)
                        ecx_11 = nullptr
                    
                    data_1724a40 = eax
                    int32_t* var_24_1 = ecx_11
                    
                    if (esi_4 == 0)
                        goto label_62a3bb
                    
                    int32_t* esi_5 = *(esi_4 + 0x7590)
                    int32_t* eax_10 = sub_4b9480()
                    uint32_t eax_11
                    int32_t ecx_12
                    eax_11, ecx_12 = sub_4c89a0()
                    int32_t var_3c_3 = ecx_12
                    eax = sub_5a05d0(eax_11, eax_10, eax_11, 0xb80ad8, esi_5, eax, eax_9, 
                        0x1724040, i_1)
                    int32_t* ecx_14 = eax
                    data_1724a44 = ecx_14
                    
                    if (ecx_14 s< 0x80)
                        void* i
                        bool edx_5
                        void* esi_6
                        
                        if (data_1724a50 == eax_1 || data_1724a4c != 0)
                            esi_6 = eax_9
                            i = data_1724a40 + ecx_14
                            edx_5 = i s< eax_1
                            data_1724a4c = edx_5
                        else
                            esi_6 = eax_9
                            void* var_14_1 = eax_1
                            void* i_2 = eax_1 - esi_6
                            
                            if (eax_1 - esi_6 s< 0)
                                i_2 = nullptr
                            
                            bool cond:5_1 = var_10 == esi_6
                            i_1 = i_2
                            i_2.b = cond:5_1
                            uint32_t eax_13 = zx.d(i_2.b)
                            uint32_t var_3c_4 = eax_13
                            i = sub_66b420(eax_13, &i_1, arg1.b)
                            edx_5 = data_1724a4c
                            ecx_14 = data_1724a44
                        
                        data_1724a50 = eax_1
                        
                        if (ecx_14 s< 0)
                            ecx_14 = nullptr
                            data_1724a44 = 0
                        
                        int32_t esi_7
                        
                        if (data_b80998 == 0)
                            esi_7 = arg1
                        else
                            void* var_c_1 = eax_1
                            void* ecx_16 = nullptr
                            esi_7 = arg1
                            
                            if (eax_1 - esi_6 s>= 0)
                                ecx_16 = eax_1 - esi_6
                            
                            var_10 = ecx_16
                            void* eax_16
                            eax_16.b = edx_5 == 0
                            uint32_t eax_17 = zx.d(eax_16.b)
                            uint32_t var_3c_5 = eax_17
                            i = sub_66b420(eax_17, &var_10, esi_7.b)
                            ecx_14 = data_1724a44
                            data_b80998 -= 1
                        
                        i_1 = nullptr
                        
                        if (ecx_14 s> 0)
                            void* ebx_2 = &data_1724044
                            void* edi_2 = &data_1a979f8
                            void* var_28_2 = &data_1724044
                            void* var_1c_2 = &data_1a979f8
                            
                            do
                                int32_t* eax_19 = sub_64c870(sub_64e7a0(esi_7), var_24_1)
                                
                                if (eax_19 != 0)
                                    float eax_22 = sub_65de30(sub_64e7a0(sub_4bb9f0(edi_2, eax_19, 
                                        "txt_entry")))
                                    uint32_t eax_25
                                    
                                    if (data_1724a48 != var_24_1)
                                        uint32_t eax_26 = sub_64e7a0(eax_19)
                                        sub_665db0(eax_26, &data_bf1294, eax_26, 0x3f800000, 
                                            0xffffffff, 0)
                                        
                                        if (*ebx_2 != 0 || eax_22 s> 1)
                                            eax_25 = sub_64e7a0(eax_19)
                                            sub_665db0(eax_25, &data_bf12d0, eax_25, 0x3f800000, 
                                                0xffffffff, 0)
                                    else
                                        uint32_t eax_24 = sub_64e7a0(eax_19)
                                        sub_665db0(eax_24, &data_bf12a0, eax_24, 0x3f800000, 
                                            0xffffffff, 0)
                                        
                                        switch (eax_22)
                                            case 0, 1
                                                nop
                                            case 2
                                                eax_25 = sub_64e7a0(eax_19)
                                                sub_665db0(eax_25, &data_bf12ac, eax_25, 
                                                    0x3f800000, 0xffffffff, 0)
                                            default
                                                eax_25 = sub_64e7a0(eax_19)
                                                sub_665db0(eax_25, &data_bf12c4, eax_25, 
                                                    0x3f800000, 0xffffffff, 0)
                                    int32_t var_3c_7 = 0xffffffff
                                    sub_666380(ebx_2 - 4, &data_bf1270, eax_19, ebx_2 - 4)
                                    int32_t edi_4 = *ebx_2
                                    
                                    if (edi_4 != 0)
                                        int32_t eax_28 = sub_4e3a30(0xbdfb60)
                                        
                                        if (sub_624650() != 0)
                                            if (eax_28 != 1)
                                                uint32_t eax_30
                                                
                                                if (edi_4 != 2)
                                                label_62a7a7:
                                                    eax_30 = sub_64e7a0(eax_19)
                                                    sub_665db0(eax_30, &data_bf127c, eax_30, 
                                                        0x3f800000, 0xffffffff, 0)
                                                else
                                                    eax_30 = sub_64e7a0(eax_19)
                                                    sub_665db0(eax_30, &data_bf1288, eax_30, 
                                                        0x3f800000, 0xffffffff, 0)
                                            else if (edi_4 != 2)
                                                goto label_62a7a7
                                        
                                        ebx_2 = var_28_2
                                
                                ebx_2 += 0x14
                                var_1c_2 += 0x24
                                i = i_1 + 1
                                var_24_1 += 1
                                edi_2 = var_1c_2
                                esi_7 = arg1
                                i_1 = i
                                var_28_2 = ebx_2
                            while (i s< data_1724a44)
                        
                        return i
                    
                    var_3c_1 = "LogLinesUpdate"
                    var_40_1 = 0xfb14
                    ecx = "gLogData.numLines < MAX_LINES"
                    var_44 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                else
                    var_3c_1 = "LogLinesUpdate"
                    var_40_1 = 0xfb0f
                    ecx = "extents.y - extents.x <= MAX_LINES"
                    var_44 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
            else
                eax = eax_2 - 2
                
                if (eax_2 == 2)
                    eax_5 = sub_64e7a0(arg1)
                    edx_1 = &data_8dc680
                    goto label_62a4ba
                
                var_3c_1 = "LogLinesUpdate"
                var_40_1 = 0xfb0b
                ecx = "Halt"
                var_44 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
        else
            var_3c_1 = "GetLocalSettings"
            var_40_1 = 0x5fb
            var_44 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
            ecx = "gGameSettings.localSettings"
    else
        var_3c_1 = "GetActiveConfig"
        var_40_1 = 0x33b6
        ecx = "c.activeGame.gameType != GAME_NONE"
        var_44 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
else
label_62a3bb:
    var_3c_1 = "GetClient"
    var_40_1 = 0x7b
    var_44 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx = "gClient"

sub_63b870(eax, &data_801800, ecx, var_44, var_40_1, var_3c_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
