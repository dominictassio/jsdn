import XCTest
import SwiftTreeSitter
import TreeSitterJsdn

final class TreeSitterJsdnTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_jsdn())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Jsdn grammar")
    }
}
