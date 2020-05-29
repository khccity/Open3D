// ----------------------------------------------------------------------------
// -                        Open3D: www.open3d.org                            -
// ----------------------------------------------------------------------------
// The MIT License (MIT)
//
// Copyright (c) 2018 www.open3d.org
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
// IN THE SOFTWARE.
// ----------------------------------------------------------------------------

#include "UnitTest/TestUtility/Sort.h"

#include <algorithm>

#include "TestUtility/UnitTest.h"

namespace open3d {
namespace unit_test {

// Test the Sort function itself.
TEST(Sort, TestSort) {
    std::vector<Eigen::Vector3d> points{
            {0, 0, 1}, {1, 1, 0}, {0, 0, 2}, {0, 0, 0}, {0, 1, 0}, {0, 1, 0},
            {2, 1, 2}, {0, 1, 1}, {1, 1, 1}, {0, 1, 2}, {2, 0, 2}, {2, 1, 0},
            {2, 1, 1}, {2, 0, 0}, {1, 0, 0}, {1, 0, 1}, {1, 0, 2}, {1, 1, 0},
    };
    std::vector<Eigen::Vector3d> sorted_points{
            {0, 0, 0}, {0, 0, 1}, {0, 0, 2}, {0, 1, 0}, {0, 1, 0}, {0, 1, 1},
            {0, 1, 2}, {1, 0, 0}, {1, 0, 1}, {1, 0, 2}, {1, 1, 0}, {1, 1, 0},
            {1, 1, 1}, {2, 0, 0}, {2, 0, 2}, {2, 1, 0}, {2, 1, 1}, {2, 1, 2},
    };

    ExpectEQ(Sort(points), sorted_points);
}

}  // namespace unit_test
}  // namespace open3d
