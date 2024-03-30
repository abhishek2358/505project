/**
 * Autogenerated by Thrift Compiler (0.21.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef StorageOps_TYPES_H
#define StorageOps_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/TBase.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <functional>
#include <memory>


namespace storage {

class Cell;

typedef struct _Cell__isset {
  _Cell__isset() : row(false), col(false), value(false) {}
  bool row :1;
  bool col :1;
  bool value :1;
} _Cell__isset;

class Cell : public virtual ::apache::thrift::TBase {
 public:

  Cell(const Cell&);
  Cell& operator=(const Cell&);
  Cell() noexcept;

  virtual ~Cell() noexcept;
  std::string row;
  std::string col;
  std::string value;

  _Cell__isset __isset;

  void __set_row(const std::string& val);

  void __set_col(const std::string& val);

  void __set_value(const std::string& val);

  bool operator == (const Cell & rhs) const;
  bool operator != (const Cell &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Cell & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot) override;
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const override;

  virtual void printTo(std::ostream& out) const;
};

void swap(Cell &a, Cell &b);

std::ostream& operator<<(std::ostream& out, const Cell& obj);

} // namespace

#endif
