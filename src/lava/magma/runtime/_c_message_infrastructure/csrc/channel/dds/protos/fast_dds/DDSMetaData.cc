// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
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

/*!
 * @file DDSMetaData.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifdef _WIN32
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32

#include "DDSMetaData.h"
#include <fastcdr/Cdr.h>

#include <fastcdr/exceptions/BadParamException.h>
using namespace eprosima::fastcdr::exception;

#include <utility>


ddsmetadata::msg::DDSMetaData::DDSMetaData()
{
    // m_nd com.eprosima.idl.parser.typecode.PrimitiveTypeCode@442675e1
    m_nd = 0;
    // m_type com.eprosima.idl.parser.typecode.PrimitiveTypeCode@6166e06f
    m_type = 0;
    // m_elsize com.eprosima.idl.parser.typecode.PrimitiveTypeCode@49e202ad
    m_elsize = 0;
    // m_total_size com.eprosima.idl.parser.typecode.PrimitiveTypeCode@1c72da34
    m_total_size = 0;
    // m_dims com.eprosima.idl.parser.typecode.AliasTypeCode@6b0c2d26
    memset(&m_dims, 0, (5) * 8);
    // m_strides com.eprosima.idl.parser.typecode.AliasTypeCode@6b0c2d26
    memset(&m_strides, 0, (5) * 8);
    // m_mdata com.eprosima.idl.parser.typecode.SequenceTypeCode@3d3fcdb0


}

ddsmetadata::msg::DDSMetaData::~DDSMetaData()
{







}

ddsmetadata::msg::DDSMetaData::DDSMetaData(
        const DDSMetaData& x)
{
    m_nd = x.m_nd;
    m_type = x.m_type;
    m_elsize = x.m_elsize;
    m_total_size = x.m_total_size;
    // cppcheck-suppress variableScope
    m_dims = x.m_dims;
    // cppcheck-suppress variableScope
    m_strides = x.m_strides;
    // cppcheck-suppress variableScope
    m_mdata = x.m_mdata;
}

ddsmetadata::msg::DDSMetaData::DDSMetaData(
        DDSMetaData&& x)
{
    m_nd = x.m_nd;
    m_type = x.m_type;
    m_elsize = x.m_elsize;
    m_total_size = x.m_total_size;
    // cppcheck-suppress variableScope
    m_dims = std::move(x.m_dims);
    m_strides = std::move(x.m_strides);
    m_mdata = std::move(x.m_mdata);
}

ddsmetadata::msg::DDSMetaData& ddsmetadata::msg::DDSMetaData::operator =(
        const DDSMetaData& x)
{

    m_nd = x.m_nd;
    m_type = x.m_type;
    m_elsize = x.m_elsize;
    m_total_size = x.m_total_size;
    m_dims = x.m_dims;
    m_strides = x.m_strides;
    m_mdata = x.m_mdata;

    return *this;
}

ddsmetadata::msg::DDSMetaData& ddsmetadata::msg::DDSMetaData::operator =(
        DDSMetaData&& x)
{

    m_nd = x.m_nd;
    m_type = x.m_type;
    m_elsize = x.m_elsize;
    m_total_size = x.m_total_size;
    m_dims = std::move(x.m_dims);
    m_strides = std::move(x.m_strides);
    m_mdata = std::move(x.m_mdata);

    return *this;
}

bool ddsmetadata::msg::DDSMetaData::operator ==(
        const DDSMetaData& x) const
{

    return (m_nd == x.m_nd && m_type == x.m_type && m_elsize == x.m_elsize && m_total_size == x.m_total_size && m_dims == x.m_dims && m_strides == x.m_strides && m_mdata == x.m_mdata);
}

bool ddsmetadata::msg::DDSMetaData::operator !=(
        const DDSMetaData& x) const
{
    return !(*this == x);
}

size_t ddsmetadata::msg::DDSMetaData::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += ((5) * 8) + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += ((5) * 8) + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    current_alignment += (100 * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);




    return current_alignment - initial_alignment;
}

size_t ddsmetadata::msg::DDSMetaData::getCdrSerializedSize(
        const ddsmetadata::msg::DDSMetaData& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    current_alignment += 8 + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);


    if ((5) > 0)
    {
        current_alignment += ((5) * 8) + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);
    }

    if ((5) > 0)
    {
        current_alignment += ((5) * 8) + eprosima::fastcdr::Cdr::alignment(current_alignment, 8);
    }

    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);

    if (data.mdata().size() > 0)
    {
        current_alignment += (data.mdata().size() * 1) + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);
    }




    return current_alignment - initial_alignment;
}

void ddsmetadata::msg::DDSMetaData::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{

    scdr << m_nd;
    scdr << m_type;
    scdr << m_elsize;
    scdr << m_total_size;
    scdr << m_dims;

    scdr << m_strides;

    scdr << m_mdata;

}

void ddsmetadata::msg::DDSMetaData::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{

    dcdr >> m_nd;
    dcdr >> m_type;
    dcdr >> m_elsize;
    dcdr >> m_total_size;
    dcdr >> m_dims;

    dcdr >> m_strides;

    dcdr >> m_mdata;
}

/*!
 * @brief This function sets a value in member nd
 * @param _nd New value for member nd
 */
void ddsmetadata::msg::DDSMetaData::nd(
        int64_t _nd)
{
    m_nd = _nd;
}

/*!
 * @brief This function returns the value of member nd
 * @return Value of member nd
 */
int64_t ddsmetadata::msg::DDSMetaData::nd() const
{
    return m_nd;
}

/*!
 * @brief This function returns a reference to member nd
 * @return Reference to member nd
 */
int64_t& ddsmetadata::msg::DDSMetaData::nd()
{
    return m_nd;
}

/*!
 * @brief This function sets a value in member type
 * @param _type New value for member type
 */
void ddsmetadata::msg::DDSMetaData::type(
        int64_t _type)
{
    m_type = _type;
}

/*!
 * @brief This function returns the value of member type
 * @return Value of member type
 */
int64_t ddsmetadata::msg::DDSMetaData::type() const
{
    return m_type;
}

/*!
 * @brief This function returns a reference to member type
 * @return Reference to member type
 */
int64_t& ddsmetadata::msg::DDSMetaData::type()
{
    return m_type;
}

/*!
 * @brief This function sets a value in member elsize
 * @param _elsize New value for member elsize
 */
void ddsmetadata::msg::DDSMetaData::elsize(
        int64_t _elsize)
{
    m_elsize = _elsize;
}

/*!
 * @brief This function returns the value of member elsize
 * @return Value of member elsize
 */
int64_t ddsmetadata::msg::DDSMetaData::elsize() const
{
    return m_elsize;
}

/*!
 * @brief This function returns a reference to member elsize
 * @return Reference to member elsize
 */
int64_t& ddsmetadata::msg::DDSMetaData::elsize()
{
    return m_elsize;
}

/*!
 * @brief This function sets a value in member total_size
 * @param _total_size New value for member total_size
 */
void ddsmetadata::msg::DDSMetaData::total_size(
        int64_t _total_size)
{
    m_total_size = _total_size;
}

/*!
 * @brief This function returns the value of member total_size
 * @return Value of member total_size
 */
int64_t ddsmetadata::msg::DDSMetaData::total_size() const
{
    return m_total_size;
}

/*!
 * @brief This function returns a reference to member total_size
 * @return Reference to member total_size
 */
int64_t& ddsmetadata::msg::DDSMetaData::total_size()
{
    return m_total_size;
}

/*!
 * @brief This function copies the value in member dims
 * @param _dims New value to be copied in member dims
 */
void ddsmetadata::msg::DDSMetaData::dims(
        const ddsmetadata::msg::int64__5& _dims)
{
    m_dims = _dims;
}

/*!
 * @brief This function moves the value in member dims
 * @param _dims New value to be moved in member dims
 */
void ddsmetadata::msg::DDSMetaData::dims(
        ddsmetadata::msg::int64__5&& _dims)
{
    m_dims = std::move(_dims);
}

/*!
 * @brief This function returns a constant reference to member dims
 * @return Constant reference to member dims
 */
const ddsmetadata::msg::int64__5& ddsmetadata::msg::DDSMetaData::dims() const
{
    return m_dims;
}

/*!
 * @brief This function returns a reference to member dims
 * @return Reference to member dims
 */
ddsmetadata::msg::int64__5& ddsmetadata::msg::DDSMetaData::dims()
{
    return m_dims;
}
/*!
 * @brief This function copies the value in member strides
 * @param _strides New value to be copied in member strides
 */
void ddsmetadata::msg::DDSMetaData::strides(
        const ddsmetadata::msg::int64__5& _strides)
{
    m_strides = _strides;
}

/*!
 * @brief This function moves the value in member strides
 * @param _strides New value to be moved in member strides
 */
void ddsmetadata::msg::DDSMetaData::strides(
        ddsmetadata::msg::int64__5&& _strides)
{
    m_strides = std::move(_strides);
}

/*!
 * @brief This function returns a constant reference to member strides
 * @return Constant reference to member strides
 */
const ddsmetadata::msg::int64__5& ddsmetadata::msg::DDSMetaData::strides() const
{
    return m_strides;
}

/*!
 * @brief This function returns a reference to member strides
 * @return Reference to member strides
 */
ddsmetadata::msg::int64__5& ddsmetadata::msg::DDSMetaData::strides()
{
    return m_strides;
}
/*!
 * @brief This function copies the value in member mdata
 * @param _mdata New value to be copied in member mdata
 */
void ddsmetadata::msg::DDSMetaData::mdata(
        const std::vector<uint8_t>& _mdata)
{
    m_mdata = _mdata;
}

/*!
 * @brief This function moves the value in member mdata
 * @param _mdata New value to be moved in member mdata
 */
void ddsmetadata::msg::DDSMetaData::mdata(
        std::vector<uint8_t>&& _mdata)
{
    m_mdata = std::move(_mdata);
}

/*!
 * @brief This function returns a constant reference to member mdata
 * @return Constant reference to member mdata
 */
const std::vector<uint8_t>& ddsmetadata::msg::DDSMetaData::mdata() const
{
    return m_mdata;
}

/*!
 * @brief This function returns a reference to member mdata
 * @return Reference to member mdata
 */
std::vector<uint8_t>& ddsmetadata::msg::DDSMetaData::mdata()
{
    return m_mdata;
}

size_t ddsmetadata::msg::DDSMetaData::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    size_t current_align = current_alignment;










    return current_align;
}

bool ddsmetadata::msg::DDSMetaData::isKeyDefined()
{
    return false;
}

void ddsmetadata::msg::DDSMetaData::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
           
}


