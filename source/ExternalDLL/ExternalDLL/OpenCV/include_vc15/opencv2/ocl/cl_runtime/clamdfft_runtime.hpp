//
// AUTOGENERATED, DO NOT EDIT
//
#ifndef __OPENCV_OCL_CLAMDFFT_RUNTIME_HPP__
#define __OPENCV_OCL_CLAMDFFT_RUNTIME_HPP__

#ifdef HAVE_CLAMDFFT

// generated by parser_clamdfft.py
#define clAmdFftSetup clAmdFftSetup_
#define clAmdFftTeardown clAmdFftTeardown_
#define clAmdFftGetVersion clAmdFftGetVersion_
#define clAmdFftCreateDefaultPlan clAmdFftCreateDefaultPlan_
#define clAmdFftCopyPlan clAmdFftCopyPlan_
#define clAmdFftBakePlan clAmdFftBakePlan_
#define clAmdFftDestroyPlan clAmdFftDestroyPlan_
#define clAmdFftGetPlanContext clAmdFftGetPlanContext_
#define clAmdFftGetPlanPrecision clAmdFftGetPlanPrecision_
#define clAmdFftSetPlanPrecision clAmdFftSetPlanPrecision_
#define clAmdFftGetPlanScale clAmdFftGetPlanScale_
#define clAmdFftSetPlanScale clAmdFftSetPlanScale_
#define clAmdFftGetPlanBatchSize clAmdFftGetPlanBatchSize_
#define clAmdFftSetPlanBatchSize clAmdFftSetPlanBatchSize_
#define clAmdFftGetPlanDim clAmdFftGetPlanDim_
#define clAmdFftSetPlanDim clAmdFftSetPlanDim_
#define clAmdFftGetPlanLength clAmdFftGetPlanLength_
#define clAmdFftSetPlanLength clAmdFftSetPlanLength_
#define clAmdFftGetPlanInStride clAmdFftGetPlanInStride_
#define clAmdFftSetPlanInStride clAmdFftSetPlanInStride_
#define clAmdFftGetPlanOutStride clAmdFftGetPlanOutStride_
#define clAmdFftSetPlanOutStride clAmdFftSetPlanOutStride_
#define clAmdFftGetPlanDistance clAmdFftGetPlanDistance_
#define clAmdFftSetPlanDistance clAmdFftSetPlanDistance_
#define clAmdFftGetLayout clAmdFftGetLayout_
#define clAmdFftSetLayout clAmdFftSetLayout_
#define clAmdFftGetResultLocation clAmdFftGetResultLocation_
#define clAmdFftSetResultLocation clAmdFftSetResultLocation_
#define clAmdFftGetPlanTransposeResult clAmdFftGetPlanTransposeResult_
#define clAmdFftSetPlanTransposeResult clAmdFftSetPlanTransposeResult_
#define clAmdFftGetTmpBufSize clAmdFftGetTmpBufSize_
#define clAmdFftEnqueueTransform clAmdFftEnqueueTransform_

#include <clAmdFft.h>

// generated by parser_clamdfft.py
#undef clAmdFftSetup
#define clAmdFftSetup clAmdFftSetup_pfn
#undef clAmdFftTeardown
#define clAmdFftTeardown clAmdFftTeardown_pfn
#undef clAmdFftGetVersion
#define clAmdFftGetVersion clAmdFftGetVersion_pfn
#undef clAmdFftCreateDefaultPlan
#define clAmdFftCreateDefaultPlan clAmdFftCreateDefaultPlan_pfn
#undef clAmdFftCopyPlan
#define clAmdFftCopyPlan clAmdFftCopyPlan_pfn
#undef clAmdFftBakePlan
#define clAmdFftBakePlan clAmdFftBakePlan_pfn
#undef clAmdFftDestroyPlan
#define clAmdFftDestroyPlan clAmdFftDestroyPlan_pfn
#undef clAmdFftGetPlanContext
#define clAmdFftGetPlanContext clAmdFftGetPlanContext_pfn
#undef clAmdFftGetPlanPrecision
#define clAmdFftGetPlanPrecision clAmdFftGetPlanPrecision_pfn
#undef clAmdFftSetPlanPrecision
#define clAmdFftSetPlanPrecision clAmdFftSetPlanPrecision_pfn
#undef clAmdFftGetPlanScale
#define clAmdFftGetPlanScale clAmdFftGetPlanScale_pfn
#undef clAmdFftSetPlanScale
#define clAmdFftSetPlanScale clAmdFftSetPlanScale_pfn
#undef clAmdFftGetPlanBatchSize
#define clAmdFftGetPlanBatchSize clAmdFftGetPlanBatchSize_pfn
#undef clAmdFftSetPlanBatchSize
#define clAmdFftSetPlanBatchSize clAmdFftSetPlanBatchSize_pfn
#undef clAmdFftGetPlanDim
#define clAmdFftGetPlanDim clAmdFftGetPlanDim_pfn
#undef clAmdFftSetPlanDim
#define clAmdFftSetPlanDim clAmdFftSetPlanDim_pfn
#undef clAmdFftGetPlanLength
#define clAmdFftGetPlanLength clAmdFftGetPlanLength_pfn
#undef clAmdFftSetPlanLength
#define clAmdFftSetPlanLength clAmdFftSetPlanLength_pfn
#undef clAmdFftGetPlanInStride
#define clAmdFftGetPlanInStride clAmdFftGetPlanInStride_pfn
#undef clAmdFftSetPlanInStride
#define clAmdFftSetPlanInStride clAmdFftSetPlanInStride_pfn
#undef clAmdFftGetPlanOutStride
#define clAmdFftGetPlanOutStride clAmdFftGetPlanOutStride_pfn
#undef clAmdFftSetPlanOutStride
#define clAmdFftSetPlanOutStride clAmdFftSetPlanOutStride_pfn
#undef clAmdFftGetPlanDistance
#define clAmdFftGetPlanDistance clAmdFftGetPlanDistance_pfn
#undef clAmdFftSetPlanDistance
#define clAmdFftSetPlanDistance clAmdFftSetPlanDistance_pfn
#undef clAmdFftGetLayout
#define clAmdFftGetLayout clAmdFftGetLayout_pfn
#undef clAmdFftSetLayout
#define clAmdFftSetLayout clAmdFftSetLayout_pfn
#undef clAmdFftGetResultLocation
#define clAmdFftGetResultLocation clAmdFftGetResultLocation_pfn
#undef clAmdFftSetResultLocation
#define clAmdFftSetResultLocation clAmdFftSetResultLocation_pfn
#undef clAmdFftGetPlanTransposeResult
#define clAmdFftGetPlanTransposeResult clAmdFftGetPlanTransposeResult_pfn
#undef clAmdFftSetPlanTransposeResult
#define clAmdFftSetPlanTransposeResult clAmdFftSetPlanTransposeResult_pfn
#undef clAmdFftGetTmpBufSize
#define clAmdFftGetTmpBufSize clAmdFftGetTmpBufSize_pfn
#undef clAmdFftEnqueueTransform
#define clAmdFftEnqueueTransform clAmdFftEnqueueTransform_pfn

#ifndef CL_RUNTIME_EXPORT
#if (defined(BUILD_SHARED_LIBS) || defined(OPENCV_OCL_SHARED)) && (defined WIN32 || defined _WIN32 || defined WINCE)
#define CL_RUNTIME_EXPORT __declspec(dllimport)
#else
#define CL_RUNTIME_EXPORT
#endif
#endif


// generated by parser_clamdfft.py
extern CL_RUNTIME_EXPORT clAmdFftStatus (*clAmdFftSetup)(const clAmdFftSetupData* setupData);
extern CL_RUNTIME_EXPORT clAmdFftStatus (*clAmdFftTeardown)();
extern CL_RUNTIME_EXPORT clAmdFftStatus (*clAmdFftGetVersion)(cl_uint* major, cl_uint* minor, cl_uint* patch);
extern CL_RUNTIME_EXPORT clAmdFftStatus (*clAmdFftCreateDefaultPlan)(clAmdFftPlanHandle* plHandle, cl_context context, const clAmdFftDim dim, const size_t* clLengths);
extern CL_RUNTIME_EXPORT clAmdFftStatus (*clAmdFftCopyPlan)(clAmdFftPlanHandle* out_plHandle, cl_context new_context, clAmdFftPlanHandle in_plHandle);
extern CL_RUNTIME_EXPORT clAmdFftStatus (*clAmdFftBakePlan)(clAmdFftPlanHandle plHandle, cl_uint numQueues, cl_command_queue* commQueueFFT, void (CL_CALLBACK* pfn_notify) (clAmdFftPlanHandle plHandle, void* user_data), void* user_data);
extern CL_RUNTIME_EXPORT clAmdFftStatus (*clAmdFftDestroyPlan)(clAmdFftPlanHandle* plHandle);
extern CL_RUNTIME_EXPORT clAmdFftStatus (*clAmdFftGetPlanContext)(const clAmdFftPlanHandle plHandle, cl_context* context);
extern CL_RUNTIME_EXPORT clAmdFftStatus (*clAmdFftGetPlanPrecision)(const clAmdFftPlanHandle plHandle, clAmdFftPrecision* precision);
extern CL_RUNTIME_EXPORT clAmdFftStatus (*clAmdFftSetPlanPrecision)(clAmdFftPlanHandle plHandle, clAmdFftPrecision precision);
extern CL_RUNTIME_EXPORT clAmdFftStatus (*clAmdFftGetPlanScale)(const clAmdFftPlanHandle plHandle, clAmdFftDirection dir, cl_float* scale);
extern CL_RUNTIME_EXPORT clAmdFftStatus (*clAmdFftSetPlanScale)(clAmdFftPlanHandle plHandle, clAmdFftDirection dir, cl_float scale);
extern CL_RUNTIME_EXPORT clAmdFftStatus (*clAmdFftGetPlanBatchSize)(const clAmdFftPlanHandle plHandle, size_t* batchSize);
extern CL_RUNTIME_EXPORT clAmdFftStatus (*clAmdFftSetPlanBatchSize)(clAmdFftPlanHandle plHandle, size_t batchSize);
extern CL_RUNTIME_EXPORT clAmdFftStatus (*clAmdFftGetPlanDim)(const clAmdFftPlanHandle plHandle, clAmdFftDim* dim, cl_uint* size);
extern CL_RUNTIME_EXPORT clAmdFftStatus (*clAmdFftSetPlanDim)(clAmdFftPlanHandle plHandle, const clAmdFftDim dim);
extern CL_RUNTIME_EXPORT clAmdFftStatus (*clAmdFftGetPlanLength)(const clAmdFftPlanHandle plHandle, const clAmdFftDim dim, size_t* clLengths);
extern CL_RUNTIME_EXPORT clAmdFftStatus (*clAmdFftSetPlanLength)(clAmdFftPlanHandle plHandle, const clAmdFftDim dim, const size_t* clLengths);
extern CL_RUNTIME_EXPORT clAmdFftStatus (*clAmdFftGetPlanInStride)(const clAmdFftPlanHandle plHandle, const clAmdFftDim dim, size_t* clStrides);
extern CL_RUNTIME_EXPORT clAmdFftStatus (*clAmdFftSetPlanInStride)(clAmdFftPlanHandle plHandle, const clAmdFftDim dim, size_t* clStrides);
extern CL_RUNTIME_EXPORT clAmdFftStatus (*clAmdFftGetPlanOutStride)(const clAmdFftPlanHandle plHandle, const clAmdFftDim dim, size_t* clStrides);
extern CL_RUNTIME_EXPORT clAmdFftStatus (*clAmdFftSetPlanOutStride)(clAmdFftPlanHandle plHandle, const clAmdFftDim dim, size_t* clStrides);
extern CL_RUNTIME_EXPORT clAmdFftStatus (*clAmdFftGetPlanDistance)(const clAmdFftPlanHandle plHandle, size_t* iDist, size_t* oDist);
extern CL_RUNTIME_EXPORT clAmdFftStatus (*clAmdFftSetPlanDistance)(clAmdFftPlanHandle plHandle, size_t iDist, size_t oDist);
extern CL_RUNTIME_EXPORT clAmdFftStatus (*clAmdFftGetLayout)(const clAmdFftPlanHandle plHandle, clAmdFftLayout* iLayout, clAmdFftLayout* oLayout);
extern CL_RUNTIME_EXPORT clAmdFftStatus (*clAmdFftSetLayout)(clAmdFftPlanHandle plHandle, clAmdFftLayout iLayout, clAmdFftLayout oLayout);
extern CL_RUNTIME_EXPORT clAmdFftStatus (*clAmdFftGetResultLocation)(const clAmdFftPlanHandle plHandle, clAmdFftResultLocation* placeness);
extern CL_RUNTIME_EXPORT clAmdFftStatus (*clAmdFftSetResultLocation)(clAmdFftPlanHandle plHandle, clAmdFftResultLocation placeness);
extern CL_RUNTIME_EXPORT clAmdFftStatus (*clAmdFftGetPlanTransposeResult)(const clAmdFftPlanHandle plHandle, clAmdFftResultTransposed* transposed);
extern CL_RUNTIME_EXPORT clAmdFftStatus (*clAmdFftSetPlanTransposeResult)(clAmdFftPlanHandle plHandle, clAmdFftResultTransposed transposed);
extern CL_RUNTIME_EXPORT clAmdFftStatus (*clAmdFftGetTmpBufSize)(const clAmdFftPlanHandle plHandle, size_t* buffersize);
extern CL_RUNTIME_EXPORT clAmdFftStatus (*clAmdFftEnqueueTransform)(clAmdFftPlanHandle plHandle, clAmdFftDirection dir, cl_uint numQueuesAndEvents, cl_command_queue* commQueues, cl_uint numWaitEvents, const cl_event* waitEvents, cl_event* outEvents, cl_mem* inputBuffers, cl_mem* outputBuffers, cl_mem tmpBuffer);

#endif

#endif // __OPENCV_OCL_CLAMDFFT_RUNTIME_HPP__
