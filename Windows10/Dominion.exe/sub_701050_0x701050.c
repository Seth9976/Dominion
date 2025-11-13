// 函数: sub_701050
// 地址: 0x701050
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* edi = data_147ded4
char const* const var_3c_5
int32_t var_38_1
char const* const var_34_1
char* ecx

if (arg3 != 0)
    arg1 = zx.d(arg3.w)
    void* ebx_2
    
    if (arg1 u< *(edi + 0x4250))
        ebx_2 = arg1 * 0x14c + *(edi + 0x424c)
    
    if (arg1 u>= *(edi + 0x4250) || *(ebx_2 + 0x148) != arg3)
        var_34_1 = "DataArray<struct OpenGLBufferData>::DataArrayGet"
        var_38_1 = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
        var_3c_5 = "C:\x\ax2017\Engine\DataArray.h"
    else
        void* result = sub_731ea0(arg2)
        void* result_2 = result
        int32_t edi_1 = 0
        void* result_3 = result_2
        int32_t var_8_1 = 0
        uint32_t var_c_1 = 0
        
        if (*(result_2 + 8) == 0)
            return result
        
        result = nullptr
        void* result_1 = nullptr
        
        while (true)
            int32_t* ecx_5 = *(result_2 + 4) + result * 0x3c
            void* result_4 = result_1 + 1
            int32_t* var_20_1 = ecx_5
            
            if (result_4 s>= *(result_2 + 8))
                result_4 = 0xffffffff
            
            result_1 = result_4
            arg1 = ecx_5[3]
            
            if (arg1 == data_177760c)
                int32_t edi_2 = *(ebx_2 + 0x12c)
                
                if (edi_2 != 0xffffffff)
                    int32_t edx = 0
                    int32_t var_1c_1 = 0
                    void* var_10_1 = (edi_2 << 2) + 0x41fc
                    
                    while (true)
                        arg1 = (*__glewVertexAttribPointer)(edi_2, 4, 0x1406, 0, *(result_3 + 0xc), 
                            *ecx_5 + edx)
                        
                        if (var_10_1 s>= 0x423c)
                            break
                        
                        (*__glewEnableVertexAttribArray)(edi_2)
                        *(var_10_1 + data_147ded4 - 0x40) = 1
                        (*__glewVertexAttribDivisor)(edi_2, arg4)
                        edi_2 += 1
                        edx = var_1c_1 + 0x10
                        var_1c_1 = edx
                        *(var_10_1 + data_147ded4) = arg4
                        var_10_1 += 4
                        ecx_5 = var_20_1
                        
                        if (edx s>= 0x40)
                            goto label_701509_2
                    
                    goto label_701523
                
            labelid_9:
                edi_1 = var_8_1
            else if (arg1 == data_1777610)
                int32_t edi_3 = *(ebx_2 + 0x130)
                
                if (edi_3 != 0xffffffff)
                    int32_t edx_2 = 0
                    int32_t var_1c_2 = 0
                    void* var_10_2 = (edi_3 << 2) + 0x41fc
                    
                    while (true)
                        arg1 = (*__glewVertexAttribPointer)(edi_3, 4, 0x1406, 0, *(result_3 + 0xc), 
                            *ecx_5 + edx_2)
                        
                        if (var_10_2 s>= 0x423c)
                            break
                        
                        (*__glewEnableVertexAttribArray)(edi_3)
                        *(var_10_2 + data_147ded4 - 0x40) = 1
                        (*__glewVertexAttribDivisor)(edi_3, arg4)
                        edi_3 += 1
                        edx_2 = var_1c_2 + 0x10
                        var_1c_2 = edx_2
                        *(var_10_2 + data_147ded4) = arg4
                        var_10_2 += 4
                        ecx_5 = var_20_1
                        
                        if (edx_2 s>= 0x40)
                            goto label_701509_2
                    
                    goto label_701523
                
            labelid_9:
                edi_1 = var_8_1
            else
                int32_t var_44_1
                int32_t var_40_1
                int32_t var_3c_1
                int32_t var_38_6
                int32_t var_34_8
                int32_t edi_4
                
                if (arg1 == data_177759c)
                    edi_4 = *(ebx_2 + 0x104)
                label_701248:
                    
                    if (edi_4 != 0xffffffff)
                        var_34_8 = *ecx_5
                        var_38_6 = *(result_2 + 0xc)
                        var_3c_1 = 0
                        var_40_1 = 0x1406
                        var_44_1 = 3
                        goto label_7014d1
                    
                labelid_9:
                    edi_1 = var_8_1
                else if (arg1 == data_17775a0)
                    edi_4 = *(ebx_2 + 0x104)
                    
                    if (edi_4 == 0xffffffff)
                    labelid_9:
                        edi_1 = var_8_1
                    else
                        var_34_8 = *ecx_5
                        var_38_6 = *(result_2 + 0xc)
                        var_3c_1 = 0
                        var_40_1 = 0x1406
                        var_44_1 = 2
                    label_7014d1:
                        arg1 = (*__glewVertexAttribPointer)(edi_4, var_44_1, var_40_1, var_3c_1, 
                            var_38_6, var_34_8)
                    label_7014d3:
                        
                        if (edi_4 s>= 0x10)
                        label_701523:
                            var_34_1 = "GLDupCheck_glEnableVertexAttribArray"
                            var_38_1 = 0x266
                            var_3c_5 = "C:\x\ax2017\Engine\OpenGLGraphics.cpp"
                            ecx = "index < NUM_DUPSTATE_VERTEX_ATTRIB_ENABLES"
                            break
                        
                        (*__glewEnableVertexAttribArray)(edi_4)
                        *(data_147ded4 + (edi_4 << 2) + 0x41bc) = 1
                        (*__glewVertexAttribDivisor)(edi_4, arg4)
                        *(data_147ded4 + (edi_4 << 2) + 0x41fc) = arg4
                    labelid_9:
                        edi_1 = var_8_1
                else if (arg1 != data_17775a4)
                    if (arg1 == data_17775a8)
                        edi_4 = *(ebx_2 + 0x108)
                        goto label_701248
                    
                    if (arg1 == data_17775ac)
                        edi_4 = *(ebx_2 + 0x10c)
                        goto label_701248
                    
                    if (arg1 == data_17775b0)
                        edi_4 = *(ebx_2 + 0x110)
                        goto label_701248
                    
                    int32_t var_40_2
                    int32_t var_38_7
                    int32_t var_34_9
                    int32_t edi_5
                    
                    if (arg1 != data_17775c0)
                        if (arg1 == data_17775bc)
                            arg1 = var_c_1
                            
                            if (arg1 != 0)
                                if (arg1 != 1)
                                    var_34_1 = "GLBindVertexStream"
                                    var_38_1 = 0x969
                                    var_3c_5 = "C:\x\ax2017\Engine\OpenGLGraphics.cpp"
                                    ecx = "Halt"
                                    break
                                
                                edi_5 = *(ebx_2 + 0x118)
                            else
                                edi_5 = *(ebx_2 + 0x114)
                            
                            if (edi_5 == 0xffffffff)
                                goto label_701373
                            
                            var_34_9 = *ecx_5
                            var_38_7 = *(result_2 + 0xc)
                            int32_t var_3c_3 = 1
                            var_40_2 = 0x1401
                            goto label_701333
                        
                        int32_t var_44_2
                        int32_t var_40_3
                        int32_t var_3c_4
                        int32_t var_38_9
                        int32_t var_34_12
                        int32_t edi_6
                        
                        if (arg1 == data_17775c4)
                            if (edi_1 != 0)
                                if (edi_1 != 1)
                                    var_34_1 = "GLBindVertexStream"
                                    var_38_1 = 0x985
                                    var_3c_5 = "C:\x\ax2017\Engine\OpenGLGraphics.cpp"
                                    ecx = "Halt"
                                    break
                                
                                edi_6 = *(ebx_2 + 0x120)
                            else
                                edi_6 = *(ebx_2 + 0x11c)
                            
                            if (edi_6 == 0xffffffff)
                                edi_1 = var_8_1 + 1
                                var_8_1 = edi_1
                            else
                                var_34_12 = *ecx_5
                                var_38_9 = *(result_2 + 0xc)
                                var_3c_4 = 0
                                var_40_3 = 0x1406
                                var_44_2 = 4
                            label_701431:
                                arg1 = (*__glewVertexAttribPointer)(edi_6, var_44_2, var_40_3, 
                                    var_3c_4, var_38_9, var_34_12)
                                
                                if (edi_6 s>= 0x10)
                                    goto label_701523
                                
                                (*__glewEnableVertexAttribArray)(edi_6)
                                *(data_147ded4 + (edi_6 << 2) + 0x41bc) = 1
                                (*__glewVertexAttribDivisor)(edi_6, arg4)
                                *(data_147ded4 + (edi_6 << 2) + 0x41fc) = arg4
                                edi_1 = var_8_1 + 1
                                var_8_1 = edi_1
                        else if (arg1 == data_17775c8)
                            if (edi_1 != 0)
                                if (edi_1 != 1)
                                    var_34_1 = "GLBindVertexStream"
                                    var_38_1 = 0x9a1
                                    var_3c_5 = "C:\x\ax2017\Engine\OpenGLGraphics.cpp"
                                    ecx = "Halt"
                                    break
                                
                                edi_6 = *(ebx_2 + 0x120)
                            else
                                edi_6 = *(ebx_2 + 0x11c)
                            
                            if (edi_6 != 0xffffffff)
                                var_34_12 = *ecx_5
                                var_38_9 = *(result_2 + 0xc)
                                var_3c_4 = 1
                                var_40_3 = 0x1403
                                var_44_2 = 2
                                goto label_701431
                            
                            edi_1 = var_8_1 + 1
                            var_8_1 = edi_1
                        else if (arg1 != data_17775b4)
                            if (arg1 != data_17775b8)
                                var_34_1 = "GLBindVertexStream"
                                var_38_1 = 0x9cb
                                var_3c_5 = "C:\x\ax2017\Engine\OpenGLGraphics.cpp"
                                ecx = "Halt"
                                break
                            
                            edi_4 = *(ebx_2 + 0x128)
                            
                            if (edi_4 != 0xffffffff)
                                var_34_8 = *ecx_5
                                var_38_6 = *(result_2 + 0xc)
                                var_3c_1 = 1
                                var_40_1 = 0x1401
                                var_44_1 = 4
                                goto label_7014d1
                            
                        labelid_9:
                            edi_1 = var_8_1
                        else
                            edi_4 = *(ebx_2 + 0x124)
                            
                            if (edi_4 != 0xffffffff)
                                arg1 = (*__glewVertexAttribIPointer)(edi_4, 4, 0x1401, 
                                    *(result_2 + 0xc), *ecx_5)
                                goto label_7014d3
                            
                        label_701509:
                            edi_1 = var_8_1
                    else
                        arg1 = var_c_1
                        
                        if (arg1 != 0)
                            if (arg1 != 1)
                                var_34_1 = "GLBindVertexStream"
                                var_38_1 = 0x94d
                                var_3c_5 = "C:\x\ax2017\Engine\OpenGLGraphics.cpp"
                                ecx = "Halt"
                                break
                            
                            edi_5 = *(ebx_2 + 0x118)
                        else
                            edi_5 = *(ebx_2 + 0x114)
                        
                        if (edi_5 == 0xffffffff)
                            goto label_701373
                        
                        var_34_9 = *ecx_5
                        var_38_7 = *(result_2 + 0xc)
                        int32_t var_3c_2 = 1
                        var_40_2 = 0x1406
                    label_701333:
                        arg1 =
                            (*__glewVertexAttribPointer)(edi_5, 4, var_40_2, 1, var_38_7, var_34_9)
                        
                        if (edi_5 s>= 0x10)
                            goto label_701523
                        
                        (*__glewEnableVertexAttribArray)(edi_5)
                        *(data_147ded4 + (edi_5 << 2) + 0x41bc) = 1
                        (*__glewVertexAttribDivisor)(edi_5, arg4)
                        *(data_147ded4 + (edi_5 << 2) + 0x41fc) = arg4
                        arg1 = var_c_1
                    label_701373:
                        var_c_1 = arg1 + 1
                    label_701509_1:
                        edi_1 = var_8_1
                else
                    edi_4 = *(ebx_2 + 0x104)
                    
                    if (edi_4 != 0xffffffff)
                        var_34_8 = *ecx_5
                        var_38_6 = *(result_2 + 0xc)
                        var_3c_1 = 0
                        var_40_1 = 0x1403
                        var_44_1 = 2
                        goto label_7014d1
                    
                label_701509_2:
                    edi_1 = var_8_1
            
            result = result_1
            
            if (result == 0xffffffff)
                return result
            
            result_2 = result_3
else
    var_34_1 = "DataArray<struct OpenGLBufferData>::DataArrayGet"
    var_38_1 = 0x6c
    ecx = "id != DATAID_NULL"
    var_3c_5 = "C:\x\ax2017\Engine\DataArray.h"

sub_63b870(arg1, &data_801800, ecx, var_3c_5, var_38_1, var_34_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
