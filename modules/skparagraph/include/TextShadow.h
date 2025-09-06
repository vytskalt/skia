// Copyright 2019 Google LLC.
#ifndef TextShadow_DEFINED
#define TextShadow_DEFINED

#include "include/core/SkColor.h"
#include "include/core/SkPoint.h"
#include "include/core/SkPaint.h"

namespace skia {
namespace textlayout {

class TextShadow {
public:
    SkPaint fPaint;
    SkPoint fOffset;

    TextShadow();

    TextShadow(SkPaint paint, SkPoint offset);

    bool operator==(const TextShadow& other) const;

    bool operator!=(const TextShadow& other) const;

    bool hasShadow() const;
};
}  // namespace textlayout
}  // namespace skia

#endif  // TextShadow_DEFINED
