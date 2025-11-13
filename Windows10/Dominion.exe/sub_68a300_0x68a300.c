// 函数: sub_68a300
// 地址: 0x68a300
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg2
int32_t* ebx = *(arg3 + 0x44)
int32_t var_2c_2
char const* const ecx_6

if (ebx == 0)
label_68a471:
    char const* const var_28_6 = "NetBufferGetReceiveData"
    var_2c_2 = 0x3e0
    ecx_6 = "Halt"
else
    void* count = arg4
    
    while (true)
        void* esi_1 = *ebx
        void* ecx = &ebx[1]
        int32_t* var_c_1 = ebx
        ebx = *ecx
        arg1 = *(esi_1 + 0xfdec)
        
        if (arg1 s>= count)
            void* eax_6 = memcpy(var_8, *(esi_1 + 0xfde8) + esi_1, count)
            
            if (arg5 == 0)
                return eax_6
            
            int32_t ecx_7 = *(esi_1 + 0xfdec)
            void* eax_7 = arg4
            
            if (ecx_7 != eax_7)
                *(esi_1 + 0xfde8) += eax_7
                *(esi_1 + 0xfdec) = ecx_7 - eax_7
                return eax_7
            
            void* ebx_1 = var_c_1[2]
            int32_t edx_4 = *ecx
            
            if (ebx_1 == 0)
                *(arg3 + 0x44) = edx_4
            else
                *(ebx_1 + 4) = edx_4
            
            void* edx_5 = *ecx
            int32_t eax_9 = var_c_1[2]
            
            if (edx_5 == 0)
                *(arg3 + 0x48) = eax_9
            else
                *(edx_5 + 8) = eax_9
            
            *(arg3 + 0x4c) -= 1
            sub_64c080(var_c_1, 0xc)
            void* ecx_9 = data_147abf4
            arg4 = esi_1
            return sub_68b830(ecx_9 + 0x44, &arg4)
        
        if (arg1 s<= 0)
            char const* const var_28_3 = "NetBufferGetReceiveData"
            var_2c_2 = 0x3d2
            ecx_6 = "netBuffer->mDataSize > 0"
            break
        
        memcpy(var_8, *(esi_1 + 0xfde8) + esi_1, arg1)
        arg1 = *(esi_1 + 0xfdec)
        count = arg4 - arg1
        var_8 += arg1
        arg4 = count
        
        if (arg5 != 0)
            void* edx_2 = var_c_1[2]
            int32_t ecx_1 = *ecx
            
            if (edx_2 == 0)
                *(arg3 + 0x44) = ecx_1
            else
                *(edx_2 + 4) = ecx_1
            
            void* ecx_2 = *ecx
            int32_t eax_3 = var_c_1[2]
            
            if (ecx_2 == 0)
                *(arg3 + 0x48) = eax_3
            else
                *(ecx_2 + 8) = eax_3
            
            *(arg3 + 0x4c) -= 1
            sub_64c080(var_c_1, 0xc)
            void* ecx_4 = data_147abf4
            void* var_14 = esi_1
            arg1 = sub_68b830(ecx_4 + 0x44, &var_14)
            count = arg4
        
        if (ebx == 0)
            goto label_68a471

sub_63b870(arg1, &data_801800, ecx_6, "C:\x\ax2017\Engine\Network.cpp", var_2c_2, 
    "NetBufferGetReceiveData")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
