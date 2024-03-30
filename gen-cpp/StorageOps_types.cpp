/**
 * Autogenerated by Thrift Compiler (0.21.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "StorageOps_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace storage {


Cell::~Cell() noexcept {
}

Cell::Cell() noexcept
   : row(),
     col(),
     value() {
}

void Cell::__set_row(const std::string& val) {
  this->row = val;
}

void Cell::__set_col(const std::string& val) {
  this->col = val;
}

void Cell::__set_value(const std::string& val) {
  this->value = val;
}
std::ostream& operator<<(std::ostream& out, const Cell& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t Cell::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->row);
          this->__isset.row = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->col);
          this->__isset.col = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->value);
          this->__isset.value = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t Cell::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Cell");

  xfer += oprot->writeFieldBegin("row", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->row);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("col", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->col);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("value", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->value);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Cell &a, Cell &b) {
  using ::std::swap;
  swap(a.row, b.row);
  swap(a.col, b.col);
  swap(a.value, b.value);
  swap(a.__isset, b.__isset);
}

bool Cell::operator==(const Cell & rhs) const
{
  if (!(row == rhs.row))
    return false;
  if (!(col == rhs.col))
    return false;
  if (!(value == rhs.value))
    return false;
  return true;
}

Cell::Cell(const Cell& other0) {
  row = other0.row;
  col = other0.col;
  value = other0.value;
  __isset = other0.__isset;
}
Cell& Cell::operator=(const Cell& other1) {
  row = other1.row;
  col = other1.col;
  value = other1.value;
  __isset = other1.__isset;
  return *this;
}
void Cell::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Cell(";
  out << "row=" << to_string(row);
  out << ", " << "col=" << to_string(col);
  out << ", " << "value=" << to_string(value);
  out << ")";
}

} // namespace
