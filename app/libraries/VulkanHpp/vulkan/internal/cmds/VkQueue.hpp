// Copyright (c) 2015-2019 The Khronos Group Inc.
// 
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// 
//     http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// 
// ---- Exceptions to the Apache 2.0 License: ----
// 
// As an exception, if you use this Software to generate code and portions of
// this Software are embedded into the generated code as a result, you may
// redistribute such product without providing attribution as would otherwise
// be required by Sections 4(a), 4(b) and 4(d) of the License.
// 
// In addition, if you combine or link code generated by this Software with
// software that is licensed under the GPLv2 or the LGPL v2.0 or 2.1
// ("`Combined Software`") and if a court of competent jurisdiction determines
// that the patent provision (Section 3), the indemnity provision (Section 9)
// or other Section of the License conflicts with the conditions of the
// applicable GPL or LGPL license, you may retroactively and prospectively
// choose to deem waived or otherwise exclude such Section(s) of the License,
// but only in their entirety and only with respect to the Combined Software.
//     

// This header is generated from the Khronos Vulkan XML API Registry.

#pragma once

#include "../structs.hpp"

namespace VULKAN_HPP_NAMESPACE
{

  template<typename Dispatch>
  VULKAN_HPP_INLINE void Queue::getCheckpointDataNV( uint32_t* pCheckpointDataCount, VULKAN_HPP_NAMESPACE::CheckpointDataNV* pCheckpointData, Dispatch const &d) const VULKAN_HPP_NOEXCEPT
  {
    d.vkGetQueueCheckpointDataNV( m_queue, pCheckpointDataCount, reinterpret_cast<VkCheckpointDataNV*>( pCheckpointData ) );
  }
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
  template<typename Allocator, typename Dispatch>
  VULKAN_HPP_INLINE std::vector<CheckpointDataNV,Allocator> Queue::getCheckpointDataNV(Dispatch const &d ) const
  {
    std::vector<CheckpointDataNV,Allocator> checkpointData;
    uint32_t checkpointDataCount;
    d.vkGetQueueCheckpointDataNV( m_queue, &checkpointDataCount, nullptr );
    checkpointData.resize( checkpointDataCount );
    d.vkGetQueueCheckpointDataNV( m_queue, &checkpointDataCount, reinterpret_cast<VkCheckpointDataNV*>( checkpointData.data() ) );
    return checkpointData;
  }
  template<typename Allocator, typename Dispatch>
  VULKAN_HPP_INLINE std::vector<CheckpointDataNV,Allocator> Queue::getCheckpointDataNV(Allocator const& vectorAllocator, Dispatch const &d ) const
  {
    std::vector<CheckpointDataNV,Allocator> checkpointData( vectorAllocator );
    uint32_t checkpointDataCount;
    d.vkGetQueueCheckpointDataNV( m_queue, &checkpointDataCount, nullptr );
    checkpointData.resize( checkpointDataCount );
    d.vkGetQueueCheckpointDataNV( m_queue, &checkpointDataCount, reinterpret_cast<VkCheckpointDataNV*>( checkpointData.data() ) );
    return checkpointData;
  }
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

  template<typename Dispatch>
  VULKAN_HPP_INLINE void Queue::beginDebugUtilsLabelEXT( const VULKAN_HPP_NAMESPACE::DebugUtilsLabelEXT* pLabelInfo, Dispatch const &d) const VULKAN_HPP_NOEXCEPT
  {
    d.vkQueueBeginDebugUtilsLabelEXT( m_queue, reinterpret_cast<const VkDebugUtilsLabelEXT*>( pLabelInfo ) );
  }
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
  template<typename Dispatch>
  VULKAN_HPP_INLINE void Queue::beginDebugUtilsLabelEXT( const DebugUtilsLabelEXT & labelInfo, Dispatch const &d ) const VULKAN_HPP_NOEXCEPT
  {
    d.vkQueueBeginDebugUtilsLabelEXT( m_queue, reinterpret_cast<const VkDebugUtilsLabelEXT*>( &labelInfo ) );
  }
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

  template<typename Dispatch>
  VULKAN_HPP_INLINE Result Queue::bindSparse( uint32_t bindInfoCount, const VULKAN_HPP_NAMESPACE::BindSparseInfo* pBindInfo, VULKAN_HPP_NAMESPACE::Fence fence, Dispatch const &d) const VULKAN_HPP_NOEXCEPT
  {
    return static_cast<Result>( d.vkQueueBindSparse( m_queue, bindInfoCount, reinterpret_cast<const VkBindSparseInfo*>( pBindInfo ), static_cast<VkFence>( fence ) ) );
  }
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
  template<typename Dispatch>
  VULKAN_HPP_INLINE typename ResultValueType<void>::type Queue::bindSparse( ArrayProxy<const VULKAN_HPP_NAMESPACE::BindSparseInfo> bindInfo, VULKAN_HPP_NAMESPACE::Fence fence, Dispatch const &d ) const
  {
    Result result = static_cast<Result>( d.vkQueueBindSparse( m_queue, bindInfo.size() , reinterpret_cast<const VkBindSparseInfo*>( bindInfo.data() ), static_cast<VkFence>( fence ) ) );
    return createResultValue( result, VULKAN_HPP_NAMESPACE_STRING"::Queue::bindSparse" );
  }
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

#ifdef VULKAN_HPP_DISABLE_ENHANCED_MODE
  template<typename Dispatch>
  VULKAN_HPP_INLINE void Queue::endDebugUtilsLabelEXT(Dispatch const &d) const VULKAN_HPP_NOEXCEPT
  {
    d.vkQueueEndDebugUtilsLabelEXT( m_queue );
  }
#else
  template<typename Dispatch>
  VULKAN_HPP_INLINE void Queue::endDebugUtilsLabelEXT(Dispatch const &d ) const VULKAN_HPP_NOEXCEPT
  {
    d.vkQueueEndDebugUtilsLabelEXT( m_queue );
  }
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

  template<typename Dispatch>
  VULKAN_HPP_INLINE void Queue::insertDebugUtilsLabelEXT( const VULKAN_HPP_NAMESPACE::DebugUtilsLabelEXT* pLabelInfo, Dispatch const &d) const VULKAN_HPP_NOEXCEPT
  {
    d.vkQueueInsertDebugUtilsLabelEXT( m_queue, reinterpret_cast<const VkDebugUtilsLabelEXT*>( pLabelInfo ) );
  }
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
  template<typename Dispatch>
  VULKAN_HPP_INLINE void Queue::insertDebugUtilsLabelEXT( const DebugUtilsLabelEXT & labelInfo, Dispatch const &d ) const VULKAN_HPP_NOEXCEPT
  {
    d.vkQueueInsertDebugUtilsLabelEXT( m_queue, reinterpret_cast<const VkDebugUtilsLabelEXT*>( &labelInfo ) );
  }
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

  template<typename Dispatch>
  VULKAN_HPP_INLINE Result Queue::presentKHR( const VULKAN_HPP_NAMESPACE::PresentInfoKHR* pPresentInfo, Dispatch const &d) const VULKAN_HPP_NOEXCEPT
  {
    return static_cast<Result>( d.vkQueuePresentKHR( m_queue, reinterpret_cast<const VkPresentInfoKHR*>( pPresentInfo ) ) );
  }
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
  template<typename Dispatch>
  VULKAN_HPP_INLINE Result Queue::presentKHR( const PresentInfoKHR & presentInfo, Dispatch const &d ) const
  {
    Result result = static_cast<Result>( d.vkQueuePresentKHR( m_queue, reinterpret_cast<const VkPresentInfoKHR*>( &presentInfo ) ) );
    return createResultValue( result, VULKAN_HPP_NAMESPACE_STRING"::Queue::presentKHR", { Result::eSuccess, Result::eSuboptimalKHR } );
  }
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

#ifdef VULKAN_HPP_DISABLE_ENHANCED_MODE
  template<typename Dispatch>
  VULKAN_HPP_INLINE Result Queue::setPerformanceConfigurationINTEL( VULKAN_HPP_NAMESPACE::PerformanceConfigurationINTEL configuration, Dispatch const &d) const VULKAN_HPP_NOEXCEPT
  {
    return static_cast<Result>( d.vkQueueSetPerformanceConfigurationINTEL( m_queue, static_cast<VkPerformanceConfigurationINTEL>( configuration ) ) );
  }
#else
  template<typename Dispatch>
  VULKAN_HPP_INLINE typename ResultValueType<void>::type Queue::setPerformanceConfigurationINTEL( VULKAN_HPP_NAMESPACE::PerformanceConfigurationINTEL configuration, Dispatch const &d ) const
  {
    Result result = static_cast<Result>( d.vkQueueSetPerformanceConfigurationINTEL( m_queue, static_cast<VkPerformanceConfigurationINTEL>( configuration ) ) );
    return createResultValue( result, VULKAN_HPP_NAMESPACE_STRING"::Queue::setPerformanceConfigurationINTEL" );
  }
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

  template<typename Dispatch>
  VULKAN_HPP_INLINE Result Queue::submit( uint32_t submitCount, const VULKAN_HPP_NAMESPACE::SubmitInfo* pSubmits, VULKAN_HPP_NAMESPACE::Fence fence, Dispatch const &d) const VULKAN_HPP_NOEXCEPT
  {
    return static_cast<Result>( d.vkQueueSubmit( m_queue, submitCount, reinterpret_cast<const VkSubmitInfo*>( pSubmits ), static_cast<VkFence>( fence ) ) );
  }
#ifndef VULKAN_HPP_DISABLE_ENHANCED_MODE
  template<typename Dispatch>
  VULKAN_HPP_INLINE typename ResultValueType<void>::type Queue::submit( ArrayProxy<const VULKAN_HPP_NAMESPACE::SubmitInfo> submits, VULKAN_HPP_NAMESPACE::Fence fence, Dispatch const &d ) const
  {
    Result result = static_cast<Result>( d.vkQueueSubmit( m_queue, submits.size() , reinterpret_cast<const VkSubmitInfo*>( submits.data() ), static_cast<VkFence>( fence ) ) );
    return createResultValue( result, VULKAN_HPP_NAMESPACE_STRING"::Queue::submit" );
  }
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/

#ifdef VULKAN_HPP_DISABLE_ENHANCED_MODE
  template<typename Dispatch>
  VULKAN_HPP_INLINE Result Queue::waitIdle(Dispatch const &d) const VULKAN_HPP_NOEXCEPT
  {
    return static_cast<Result>( d.vkQueueWaitIdle( m_queue ) );
  }
#else
  template<typename Dispatch>
  VULKAN_HPP_INLINE typename ResultValueType<void>::type Queue::waitIdle(Dispatch const &d ) const
  {
    Result result = static_cast<Result>( d.vkQueueWaitIdle( m_queue ) );
    return createResultValue( result, VULKAN_HPP_NAMESPACE_STRING"::Queue::waitIdle" );
  }
#endif /*VULKAN_HPP_DISABLE_ENHANCED_MODE*/
} // namespace VULKAN_HPP_NAMESPACE