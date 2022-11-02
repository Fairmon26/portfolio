from flask import flask

def create_app():
    app = flask(__name__)

    app.config['SECRET_KEY'] = 'cd project'
    return app
