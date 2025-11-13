// 函数: sub_4c5510
// 地址: 0x4c5510
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* edi = data_cc8d5c
void* i

if (edi != 0)
    int32_t ebx_1 = 0
    void* var_14_1 = edi
    int32_t var_1c_1 = 0
    int32_t var_18_1 = 0
    char var_1d_1 = 0
    
    if (edi != 0)
        int32_t* var_10
        sub_4bad70(edi + 0x507c, &var_10)
        void* i_1
        int32_t eax
        
        for (i = i_1; i != 0xffffffff; i = i_1)
            if (*(i + 0x1300) == 0)
                if (edi == 0)
                    goto label_4c5669
                
                int32_t ebx_2 = *(i + 0x1328)
                
                if (*(var_14_1 + 0x5068) != 2 || *(var_14_1 + 0x506c) != ebx_2)
                    eax = sub_4c52c0(i + 8)
                    
                    if (eax == 0x10 || eax == 0x12)
                        *arg1 = 2
                        arg1[1] = ebx_2
                        
                        if (var_1d_1 != 0)
                            goto label_4c5607
                        
                        ebx_1 = var_1c_1
                        
                        if (ebx_1 == 0)
                            ebx_1 = *arg1
                            var_1c_1 = ebx_1
                            var_18_1 = arg1[1]
                    else
                        ebx_1 = var_1c_1
                    
                    edi = data_cc8d5c
                else
                    ebx_1 = var_1c_1
                    var_1d_1 = 1
            
            sub_4baf10(var_10, &i_1)
        
        if (ebx_1 != 0)
            *arg1 = ebx_1
            arg1[1] = var_18_1
        label_4c5607:
            eax.b = 1
            return eax
        
        if (edi != 0)
            if (*(edi + 0x5068) != 1)
                i = *(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x42c0)
                
                if (i != 0)
                    arg1[1] = i
                    i.b = 1
                    *arg1 = 1
                    return i
            
            i.b = 0
            return i

label_4c5669:
sub_63b870(i, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 0x7b, 
    "GetClient")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
