#ifndef _NAMED_TYPED_
#define _NAMED_TYPED_

template <typename StrongType>
class NameTyped
{
public:
	explicit NameTyped( StrongType const& value ) : value_( value ) {}
	StrongType get() { return value_; }

private:
	StrongType value_;
};

#endif // !_NAMED_TYPED_