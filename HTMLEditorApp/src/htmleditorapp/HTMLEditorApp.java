/*
 * Copyright (c) 2012 Oracle and/or its affiliates.
 * All rights reserved. Use is subject to license terms.
 *
 * This file is available and licensed under the following license:
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  - Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  - Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the distribution.
 *  - Neither the name of Oracle Corporation nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
package htmleditorapp;

import javafx.application.Application;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.geometry.Insets;
import javafx.geometry.Pos;
import javafx.scene.Group;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.ScrollPane;
import javafx.scene.layout.VBox;
import javafx.scene.web.HTMLEditor;
import javafx.stage.Stage;

/**
 * A sample that demonstrates the HTML Editor. You can make changes to the
 * example text, and the resulting generated HTML is displayed.
 *
 * @related controls/text/SimpleLabel
 * @see javafx.scene.web.HTMLEditor
 */
public class HTMLEditorApp extends Application {
    private HTMLEditor htmlEditor = null;
    private final String INITIAL_TEXT = "<html><body>Lorem ipsum dolor sit amet, consectetur adipiscing elit."
            +"Nam tortor felis, pulvinar in scelerisque cursus, pulvinar at ante. Nulla consequat "
            + "congue lectus in sodales. Nullam eu est a felis ornare bibendum et nec tellus. "
            + "Vivamus non metus tempus augue auctor ornare. Duis pulvinar justo ac purus adipiscing "
            + "pulvinar. Integer congue faucibus dapibus. Integer id nisl ut elit aliquam sagittis "
            + "gravida eu dolor. Etiam sit amet ipsum sem.</body></html>";
            
    
    private void init(Stage primaryStage) {
        Group root = new Group();
        primaryStage.setScene(new Scene(root));
        VBox vRoot = new VBox();

        vRoot.setPadding(new Insets(8, 8, 8, 8));
        vRoot.setSpacing(5);

        htmlEditor = new HTMLEditor();
        htmlEditor.setPrefSize(1880, 700);
        htmlEditor.setHtmlText(INITIAL_TEXT);
        vRoot.getChildren().add(htmlEditor);

        final Label htmlLabel = new Label();
        htmlLabel.setMaxWidth(500);
        htmlLabel.setWrapText(true);

        ScrollPane scrollPane = new ScrollPane();
        scrollPane.getStyleClass().add("noborder-scroll-pane");
        scrollPane.setContent(htmlLabel);
        scrollPane.setFitToWidth(true);
        scrollPane.setPrefHeight(180);

        Button showHTMLButton = new Button("Show the HTML below");
        vRoot.setAlignment(Pos.CENTER);
        showHTMLButton.setOnAction(new EventHandler<ActionEvent>() {

            @Override
            public void handle(ActionEvent arg0) {
                htmlLabel.setText(htmlEditor.getHtmlText());
            }
        });

        vRoot.getChildren().addAll(showHTMLButton, scrollPane);
        root.getChildren().addAll(vRoot);
    }

    @Override public void start(Stage primaryStage) throws Exception {
        init(primaryStage);
        primaryStage.show();
    }

    /**
     * The main() method is ignored in correctly deployed JavaFX 
     * application. main() serves only as fallback in case the 
     * application can not be launched through deployment artifacts,
     * e.g., in IDEs with limited FX support. NetBeans ignores main().
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        launch(args);
    }
}
