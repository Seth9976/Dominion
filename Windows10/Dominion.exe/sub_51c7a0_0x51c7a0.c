// 函数: sub_51c7a0
// 地址: 0x51c7a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i_1 = arg4
int32_t esi = 0
char const* const var_2c
int32_t var_28
char const* const var_24
char* ecx

if (i_1 s<= 2)
    if (i_1 s<= 0)
        return 0
    
    int32_t* edi_1 = arg2 + 4
    int32_t edx = data_1597e1c
    int32_t var_10[0x2]
    int32_t i
    
    do
        arg1 = edi_1[-1]
        int32_t ecx_4
        
        if (arg1 == 0x898)
            arg1 = sub_51c520(*edi_1, &arg4)
            
            if (arg1.b == 0)
            label_51c920:
                edx = data_1597e1c
            else
                ecx_4 = arg4
                arg1 = nullptr
                
                if (esi s> 0)
                    do
                        if (var_10[arg1] == ecx_4)
                            goto label_51c920_2
                        
                        arg1 += 1
                    while (arg1 s< esi)
                
            label_51c91b:
                var_10[esi] = ecx_4
                esi += 1
            label_51c920_1:
                edx = data_1597e1c
        
        if (arg1 == 0x866)
            arg1 = sub_51c520(*edi_1, &arg4)
            
            if (arg1.b != 0)
                ecx_4 = arg4
                arg1 = nullptr
                
                if (esi s> 0)
                    do
                        if (var_10[arg1] == ecx_4)
                            goto label_51c920_2
                        
                        arg1 += 1
                    while (arg1 s< esi)
                
                goto label_51c91b
            
        label_51c920_2:
            edx = data_1597e1c
        else
            int32_t j_2
            
            if (arg1 == 0x3e8)
                int32_t j = *edi_1
                arg1 = *(data_1597e18 + (((j s>> 4 | j) & edx) << 2))
                edx = data_1597e1c
                
                if (arg1 != 0)
                    while (j != *arg1)
                        arg1 = arg1[2]
                        
                        if (arg1 == 0)
                            goto label_51c926
                    
                    if (arg1 != 0xfffffffc)
                        j_2 = arg1[1]
                        arg1 = nullptr
                        arg4 = j_2
                        
                        if (esi s> 0)
                            do
                                if (var_10[arg1] == j_2)
                                    goto label_51c926
                                
                                arg1 += 1
                            while (arg1 s< esi)
                        
                        var_10[esi] = j_2
                        esi += 1
            else if (arg1 == 0x5dc)
                int32_t j_1 = *edi_1
                arg1 = *(data_1597e18 + (((j_1 s>> 4 | j_1) & edx) << 2))
                edx = data_1597e1c
                
                if (arg1 != 0)
                    while (j_1 != *arg1)
                        arg1 = arg1[2]
                        
                        if (arg1 == 0)
                            goto label_51c926
                    
                    if (arg1 != 0xfffffffc)
                        j_2 = arg1[1]
                        arg1 = nullptr
                        arg4 = j_2
                        
                        if (esi s<= 0)
                            var_10[esi] = j_2
                            esi += 1
                        else
                            while (var_10[arg1] != j_2)
                                arg1 += 1
                                
                                if (arg1 s>= esi)
                                    var_10[esi] = j_2
                                    esi += 1
                                    break
        
    label_51c926:
        edi_1 = &edi_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    
    if (esi == 0)
        return 0
    
    if (esi s> 0)
        int32_t edi_2 = arg3[1]
        int32_t ebx = *arg3
        int32_t eax_9
        int32_t edx_5
        eax_9, edx_5 = __allmul(ebx, edi_2, 0x4c957f2d, 0x5851f42d)
        bool c = eax_9 + arg3[2] u< eax_9
        *arg3 = eax_9 + arg3[2]
        arg3[1] = adc.d(edx_5, arg3[3], c)
        return var_10[modu.dp.d(
            0:(ror.d(edi_2 u>> 0xd ^ (ebx u>> 0x1b | edi_2 << 5), (edi_2 u>> 0x1b).b)), esi)]
    
    var_24 = "RandomInt"
    var_28 = 0x107
    var_2c = "C:\x\ax2017\Engine\Random.cpp"
    ecx = "maxPlusOne > 0"
else
    var_24 = "RandomDoodadFromCampaignTheme"
    var_28 = 0x2bc3
    var_2c = "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp"
    ecx = "numThemes <= 2"

sub_63b870(arg1, &data_801800, ecx, var_2c, var_28, var_24)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
