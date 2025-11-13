// 函数: sub_6280b0
// 地址: 0x6280b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result = sub_5cb070()
void* result_1 = result

if (result_1 == 0)
    result_1 = data_b809d8
else
    data_b809d8 = result_1

if (result_1 == 0)
    return result

*(sub_64e7a0(arg1) + 0x18bc) = sub_627f50
uint32_t eax_1 = sub_64e7a0(arg1)
sub_665db0(eax_1, result_1, eax_1, 0x3f800000, 0xffffffff, 0)
uint32_t eax_2 = sub_64e7a0(arg1)
sub_665db0(eax_2, &data_bf1120, eax_2, 0x3f800000, 0xffffffff, 0)
uint32_t eax_4
void** edx_2

if (sub_4dad50() != 1)
    eax_4 = sub_64e7a0(arg1)
    edx_2 = &data_bf1144
else
    eax_4 = sub_64e7a0(arg1)
    edx_2 = &data_bf1138

return sub_665db0(eax_4, edx_2, eax_4, 0x3f800000, 0xffffffff, 0)
