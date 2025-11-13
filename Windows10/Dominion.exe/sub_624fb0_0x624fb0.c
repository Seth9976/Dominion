// 函数: sub_624fb0
// 地址: 0x624fb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg1
void* result
result.b = arg1.b
void* ecx = data_cc8d5c
var_8:3.b = result.b

if (ecx != 0)
    if (*(ecx + 0x5068) != 2)
        int32_t edi_1 = 0
        int32_t esi_1 = 0
        int32_t ebx_1 = *sub_4b9480()
        
        while (true)
            if (*(sub_61dad0() + esi_1 + 8) == ebx_1)
                *(sub_61dad0() + edi_1 * 0xc + 8) = 0
                data_cc8dc8
                sub_4d8ad0(esi_1)
                result = data_cc8d5c
                
                if (result == 0)
                    break
                
                *(result + 0x5044) = 0xb
                *(result + 0x5058) = edi_1
                return result
            
            esi_1 += 0xc
            edi_1 += 1
            
            if (esi_1 s>= 0x78)
                int32_t ecx_5
                
                if (var_8:3.b == 0)
                    ecx_5 = 0
                else
                    ecx_5 = sub_4b9480()[0xd]
                
                result = data_cc8d5c
                
                if (result == 0)
                    break
                
                *(result + 0x5044) = 9
                *(result + 0x75b4) = ecx_5
                return result
    else
        result = sub_4b90e0(*(ecx + 0x506c), result.b)
        void* ecx_2 = data_cc8d5c
        
        if (ecx_2 != 0)
            result = sub_4c5930(*(ecx_2 + 0x506c))
            void* ecx_4 = data_cc8d5c
            
            if (ecx_4 != 0)
                *(ecx_4 + 0x5044) = 7
                *(ecx_4 + 0x5064) = 0
                *(ecx_4 + 0x5060) = 0
                *(ecx_4 + 0x5064) |= 2
                return result

sub_63b870(result, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
    0x7b, "GetClient")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
